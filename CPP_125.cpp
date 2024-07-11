#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t prev = 0, next = -1;
    
    do {
        next = txt.find(' ', prev);
        if (next == string::npos) {
            next = txt.find(',', prev);
            if (next == string::npos)
                return {to_string(count_lowercase(txt))};
        }
        
        result.push_back(txt.substr(prev, next - prev));
        prev = next + 1;
    } while (next != string::npos);

    return result;
}

int count_lowercase(string txt) {
    int count = 0;
    for (char c : txt) {
        if (islower(c)) {
            count++;
            if (count % 2 == 0)
                break;
        }
    }
    return count;
}
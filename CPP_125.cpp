#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count_lowercase(txt))};
            else
                pos = txt.find(',');
        }
        result.push_back(txt.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }

    result.push_back(txt.substr(prevPos));

    return result;
}

int count_lowercase(string str) {
    int count = 0;
    for (char c : str) {
        if (islower(c)) {
            count++;
            if (count % 2 != 0)
                break;
        }
    }
    return count;
}
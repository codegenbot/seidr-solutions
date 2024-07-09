#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    
    size_t pos = 0;
    string token;
    
    while ((pos = txt.find(' ')) != string::npos) {
        token = txt.substr(0, pos);
        result.push_back(token);
        txt.erase(0, pos + 1);
    }
    
    if (txt.empty()) {
        return result;
    }
    
    result.push_back(txt);
    
    return result.size() == 1 ? vector<string>({"" + to_string(count_lowercase(txt))}) : result;
}

int count_lowercase(string str) {
    int count = 0;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            count += 1;
        }
    }
    return count;
}
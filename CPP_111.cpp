```cpp
#include <map>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isSame(char ch1, char ch2) {
    return tolower(ch1) == tolower(ch2);
}

map<pair<char,int>,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    for(auto& word : split(test, ' ')){
        int count = 0;
        char firstChar = *word.begin();
        for (auto c : word) {
            if(isSame(c,firstChar)) {
                count++;
            } else {
                break;
            }
        }
        if(count > maxCount){
            maxCount = count;
            result.clear();
            result[make_pair(firstChar,count)] = 1;
        }else if(count == maxCount){
            result[make_pair(firstChar,count)] = 1;
        }
    }
    return result;
}

vector<string> split(string str, char ch) {
    vector<string> tokens;
    string token;
    for (auto c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}
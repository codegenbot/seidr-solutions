#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    string rotated;
    for(string s : split(b,"")){
        rotated = s + rotated;
        if(a.find(rotated) != string::npos) {
            return true;
        }
    }
    return false;
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0,pos));
        str.erase(0,pos+1);
    }
    tokens.push_back(str);
    return tokens;
}
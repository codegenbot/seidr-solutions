#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(string s : split(b,"")){ 
        if(a.find(s) != string::npos) {
            return true;
        }
    }    
    return false;
}

string split(const string& str, char c) {
    vector<string> tokens = {};
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return string(tokens[0]);
}
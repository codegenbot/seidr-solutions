#include <string>
#include <cassert>

bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}
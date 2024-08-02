#include <vector>
#include <string>
#include <cassert>

vector<string> all_prefixes(string str);

bool issame(const vector<string> a, const vector<string> b){
    return a == b;
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
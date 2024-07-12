#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}
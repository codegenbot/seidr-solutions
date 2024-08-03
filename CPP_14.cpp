#include <vector>
#include <cassert>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> all_prefixes(string str);

int main() {
    vector<string> expected = {"W", "WW", "WWW"};
    assert(issame(all_prefixes("WWW"), expected));
    return 0;
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
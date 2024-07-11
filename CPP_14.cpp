#include <string>

vector<string> all_prefixes(string b){
    vector<string> result;
    string prefix = "";
    for (char c : b) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}
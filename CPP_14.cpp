#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(char c : str){
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}
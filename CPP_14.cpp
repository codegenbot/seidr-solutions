#include <vector>
using namespace std;

bool issame(string s1, string s2){
    return s1 == s2;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    
    return result;
}
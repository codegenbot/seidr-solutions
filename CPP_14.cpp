#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(char c : str){
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
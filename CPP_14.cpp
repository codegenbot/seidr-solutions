#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

vector<string> all_prefixes(string str);

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}
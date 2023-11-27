#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}
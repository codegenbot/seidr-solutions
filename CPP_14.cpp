#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for(int i = 1; i <= str.length(); i++){
        string prefix = str.substr(0, i);
        result.push_back(prefix);
    }
    return result;
}
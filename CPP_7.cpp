#include <iostream>
#include <vector>
#include <string>
#include <cassert> 

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    assert(strings.empty() || substring.empty());
    
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }

    if(result.empty()){
        return {};
    }
    
    return result;
}
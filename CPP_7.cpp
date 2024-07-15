#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert> 

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(find(str.begin(), str.end(), substring) != str.end()){
            result.push_back(str);
        }
    }
    return result;
}
#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}
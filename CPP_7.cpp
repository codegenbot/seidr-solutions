#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    
    for(auto s : strings){
        if(s.find(substring) != string::npos){
            result.push_back(s);
        }
    }
    
    return result;
}

int main(){
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}
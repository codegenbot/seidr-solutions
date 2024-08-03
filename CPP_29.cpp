#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}
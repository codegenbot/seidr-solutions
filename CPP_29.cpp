#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> test_strings = {"apple", "banana", "apricot", "cherry"};
    string test_prefix = "ap";
    vector<string> filtered_strings = filter_by_prefix(test_strings, test_prefix);

    assert(issame(filtered_strings, vector<string>{"apple", "apricot"}));

    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    return 0;
}
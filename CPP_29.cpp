#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};
    vector<string> filtered = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    
    assert(filtered == expected_result);
    
    return 0;
}
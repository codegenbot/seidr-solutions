#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> input = {"apple", "banana", "apricot", "avocado"};
    string prefix = "a";
    vector<string> output = filter_by_prefix(input, prefix);
    
    // Add assert here
    assert(output.size() == 3);
    assert(output[0] == "apple");
    assert(output[1] == "apricot");
    assert(output[2] == "avocado");

    return 0;
}
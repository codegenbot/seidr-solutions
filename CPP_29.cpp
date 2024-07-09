#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    auto issame = [prefix](const string& str) { return str.find(prefix) == 0; };
    for(const auto& str : strings){
        if(issame(str)){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> input = {"apple", "banana", "apricot", "cherry"};
    vector<string> output = filter_by_prefix(input, "ap");
    assert(output.size() == 2);
    assert(output[0] == "apple");
    assert(output[1] == "apricot");
    return 0;
}
#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    auto issame = [&prefix](const string& str) { return str.find(prefix) == 0; };
    for(const auto& str : strings){
        if(issame(str)){
            result.push_back(str);
        }
    }
    return result;
}
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    auto issame = [&prefix](const string& str){
        return str.find(prefix) == 0;
    };

    vector<string> result;
    copy_if(strings.begin(), strings.end(), back_inserter(result), issame);

    return result;
}
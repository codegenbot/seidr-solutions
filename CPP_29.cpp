#include <vector>
#include <string>
#include <algorithm>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    auto issame = [&prefix](const string& str){ return str.find(prefix) == 0; };
    copy_if(strings.begin(), strings.end(), back_inserter(result), issame);
    return result;
}
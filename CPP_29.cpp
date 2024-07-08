#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const string& str, const string& prefix) {
    return str.find(prefix) == 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(str, prefix)) {
            result.push_back(str);
        }
    }
    return result;
}
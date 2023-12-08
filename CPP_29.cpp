#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].substr(0, prefix.length()) == prefix) {
            result.push_back(strings[i]);
        }
    }
    return result;
}
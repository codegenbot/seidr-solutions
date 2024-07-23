#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> filter_by_prefix(vector<string> vec, string prefix) {
    vector<string> result;
    for (const auto &str : vec) {
        if (str.substr(0, prefix.length()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    for (const auto &str : filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx")) {
        cout << str << endl;
    }
    
    return 0;
}
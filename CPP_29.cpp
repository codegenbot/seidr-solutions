#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // implementation of the function
    // ...
}

vector<string> filtered_strings(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}


int main() {
    assert(issame(filtered_strings({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    // rest of the code
    // ...
}
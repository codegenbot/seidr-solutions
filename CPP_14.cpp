```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
  
#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    // Main function code goes here
}

bool issame(vector<string> a, vector<string> b) {
    // issame function implementation goes here
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}
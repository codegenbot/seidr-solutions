```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    size_t prev = 0, next = 0;
    do {
        next = str.find(delimiter, prev);
        if (next == string::npos) break;
        tokens.push_back(str.substr(prev, next-prev));
        prev = next + 1;
    } while (next != string::npos);
    tokens.push_back(str.substr(prev));
    return tokens;
}

int main() {
    vector<string> strings;
    string input;

    // Get list of strings from user
    cout << "Enter list of strings separated by spaces: ";
    getline(cin, input);
    for (auto& s : split(input, ' ')) {
        strings.push_back(s);
    }

    // Get prefix from user
    string prefix;
    cout << "Enter prefix: ";
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    assert(issame(result, {"xxx", "xxxAAA", "xxx"}));

    return 0;
}
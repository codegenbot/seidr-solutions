```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    for (const auto& s : a) {
        if (!count(b.begin(), b.end(), tolower(s))) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result; 
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); // Modified this line
        strings.push_back(s);
    }
    string substring;
    cin >> substring;

    vector<string> list = { "grunt", "prune" };
    if (!issame(strings, list)) {
        assert(false);
    }

    vector<string> result = filter_by_substring(strings, substring);

    for (const auto& s : result) {
        cout << s << "\n";
    }

    return 0;
}
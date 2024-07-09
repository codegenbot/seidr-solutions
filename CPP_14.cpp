```cpp
#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    vector<vector<string>> inputs = {{"www", "http"}, {"abc", "ab"}};
    for (auto& input : inputs) {
        vector<string> a = all_prefixes(input[0]);
        vector<string> b = all_prefixes(input[1]);
        if (issame(a, b)) {
            cout << "True";
        } else {
            cout << "False";
        }
        cout << endl;
    }
    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}
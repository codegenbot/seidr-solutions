```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
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

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filteredStrings;

    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }

    return filteredStrings;
}

int main() {
    // Test cases
    vector<string> a = {"apple", "banana", "carrot"};
    vector<string> b = {"apple", "banana", "carrot"};

    if (issame(a, b)) {
        cout << "a and b are the same" << endl;
    } else {
        cout << "a and b are different" << endl;
    }

    vector<string> filtered = filter_by_prefix(a, "app");
    cout << "Filtered strings:" << endl;
    for (const auto& str : filtered) {
        cout << str << endl;
    }

    return 0;
}
```
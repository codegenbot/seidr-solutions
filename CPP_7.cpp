```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    vector<string> strings;
    string substring;

    cout << "Enter the number of strings: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, strings[i]);
    }

    cout << "Enter a substring to filter by: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    if (issame({substring}, {result[0]})) {
        cout << "The first filtered string is the same as the given substring.\n";
    } else {
        cout << "The first filtered string is different from the given substring.\n";
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    vector<string> strings;
    cout << "Enter number of strings: ";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cout << "Enter string " << i+1 << ": ";
        getline(cin, str);
        strings.push_back(str);
    }

    string substring;
    cout << "Enter the substring: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);
    if (issame(result, strings)) {
        cout << "The resulting list contains all original strings." << endl;
    } else {
        cout << "The resulting list is different from the original list." << endl;
    }

    return 0;
}
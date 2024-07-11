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
    string substring;

    // Read input from user
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore(); // Ignore newline character left over from previous read operation
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, strings[i]);
    }

    cout << "Enter the substring: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    if (issame({substring}, result)) {
        cout << "The output contains the same strings as the input." << endl;
    } else {
        cout << "The output does not contain the same strings as the input." << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}
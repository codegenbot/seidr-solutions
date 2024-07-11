#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    int num_strings;
    cin >> num_strings;

    vector<string> strings(num_strings);

    for (int i = 0; i < num_strings; ++i) {
        cin >> strings[i];
    }

    string substring;
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);
    bool same = issame(result, strings);

    if (same) {
        for (const auto& s : result) {
            cout << s << " ";
        }
        cout << endl;
    } else {
        cout << "No match found" << endl;
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
#include <vector>
#include <string>
#include <initializer_list>

bool sameVectors(vector<string>, vector<string>);
vector<string> filter_by_prefix(vector<string>, string);

bool sameVectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[(i + 1) % a.size()]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

}

int main() {
    vector<string> a;
    cout << "Enter strings (stop when empty):" << endl;
    string s;
    cin >> s; // input string
    while (getline(cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    bool same = sameVectors(a, a);

    cout << "Enter prefix:" << endl;
    string prefix;
    cin >> prefix;

    vector<string> result = filter_by_prefix(a, prefix);

    if (!same) 
        cout << "Strings are not the same." << endl;
    else 
        cout << "Strings are the same." << endl;

    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;

}
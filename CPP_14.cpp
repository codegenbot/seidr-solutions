#include <vector>
#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);
    for (const auto& prefix : prefixes) {
        cout << prefix << " ";
    }
    return 0;
}
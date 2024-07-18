#include <vector>
#include <string>

bool issame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}

vector<string> all_prefixes(string str);

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    string test_str = "prefixes";
    vector<string> prefixes = all_prefixes(test_str);

    for (const string& prefix : prefixes) {
        cout << prefix << " ";
    }

    return 0;
}
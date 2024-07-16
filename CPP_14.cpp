#include <vector>
#include <string>

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (size_t i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str);

int main() {
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);
    vector<string> expected = {"a", "ab", "abc", "abcd"};
    if (issame(prefixes, expected)) {
        cout << "Prefixes match expected values";
    } else {
        cout << "Prefixes do not match expected values";
    }
    return 0;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    vector<string> expected = {"W", "WW", "WWW"};

    if (issame(prefixes, expected)) {
        cout << "Test cases passed." << endl;
    } else {
        cout << "Test cases failed." << endl;
    }

    return 0;
}
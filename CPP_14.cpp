#include <vector>
#include <string>

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

vector<string> all_prefixes(string str);

int main() {
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);
    vector<string> prefixes2 = all_prefixes(input);
    if (issame(prefixes, prefixes2)) {
        cout << "Prefixes are the same" << endl;
    } else {
        cout << "Prefixes are different" << endl;
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
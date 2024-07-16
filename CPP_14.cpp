#include <vector>
#include <string>

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); i++) {
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
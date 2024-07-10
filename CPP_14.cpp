#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    string test_str = "coding";
    vector<string> prefixes = all_prefixes(test_str);
    vector<string> prefixes_copy = all_prefixes(test_str);

    if (issame(prefixes, prefixes_copy)) {
        cout << "Both vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    return 0;
}
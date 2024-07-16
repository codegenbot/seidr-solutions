#include <string>
#include <vector>

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
    // Example usage
    vector<string> prefixes = all_prefixes("hello");
    vector<string> expected = {"h", "he", "hel", "hell", "hello"};
    if (issame(prefixes, expected)) {
        cout << "Prefixes are the same as expected" << endl;
    } else {
        cout << "Prefixes are different from expected" << endl;
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
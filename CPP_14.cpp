#include <string>
#include <vector>

vector<string> all_prefixes(string str);

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
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<string> prefixes = all_prefixes(input);

    vector<string> prefixes2 = all_prefixes(input); // Can change this input to test

    if (issame(prefixes, prefixes2)) {
        cout << "Prefixes vectors are the same!" << endl;
    } else {
        cout << "Prefixes vectors are NOT the same!" << endl;
    }

    return 0;
}
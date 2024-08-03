#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> test1 = all_prefixes("abcde");
    vector<string> test2 = all_prefixes("abcd");

    if (issame(test1, test2)) {
        cout << "Prefixes are the same." << endl;
    } else {
        cout << "Prefixes are different." << endl;
    }

    return 0;
}
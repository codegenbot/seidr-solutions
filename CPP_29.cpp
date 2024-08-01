#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> words = {"apple", "banana", "bear", "cat", "doll"};
    string pre = "b";

    vector<string> filtered = filter_by_prefix(words, pre);

    for (const auto& word : filtered) {
        cout << word << endl;
    }

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}
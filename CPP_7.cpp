#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!filter_by_substring(a[i], b[i]).size()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings1 = {"apple", "banana", "cat"};
    vector<string> strings2 = {"aple", "banan", "ca"};
    if (same(strings1, strings2)) {
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are not the same" << endl;
    }
    return 0;
}
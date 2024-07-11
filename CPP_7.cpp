```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring = "an";
    bool check = same(filter_by_substring(strings, substring), strings);
    if (check) cout << "The two vectors are the same" << endl;
    else cout << "The two vectors are not the same" << endl;
    return 0;
}
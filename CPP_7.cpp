```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (!filter_by_substring({a[i]}, "same").size()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings = {"hello", "world", "same same", "example"};
    string substring = "same";
    bool result = same(vector<string>(), strings);
    if (result) {
        cout << "Strings are the same." << endl;
    } else {
        cout << "Strings are not the same." << endl;
    }
    return 0;
}
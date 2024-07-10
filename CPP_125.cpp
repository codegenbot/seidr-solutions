```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string txt;
    cin >> txt;
    vector<string> result = split_words(txt);
    assert(issame(result, {"one", "two", "three"}));
    return 0;
}
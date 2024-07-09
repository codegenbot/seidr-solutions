```cpp
#include <cassert>
#include <vector>
#include <string>

bool areEqual(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> words, string prefix) {
    vector<string> result;
    for (string word : words) {
        if (word.find(prefix) == 0) {
            result.push_back(word);
        }
    }
    return result;

}

int main() {
    assert(areEqual(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaAaAa", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}
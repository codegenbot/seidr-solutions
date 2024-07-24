```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        std::cerr << "Error: Vectors of different sizes.\n";
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) {
            std::cerr << "Error: Elements are not the same.\n";
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}
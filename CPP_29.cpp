#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    for(const auto& str : a) {
        if(find(b.begin(), b.end(), str) == b.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({{"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}}, {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}
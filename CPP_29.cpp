```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a,std::vector<std::string>, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(b[i].find(a[i]) == std::string::npos) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}
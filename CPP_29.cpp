```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a==b; 
}

int main() {
    assert (issame(vector<string>(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx")) , vector<string> {"xxx", "xxxAAA", "xxx"}));
    return 0;
}
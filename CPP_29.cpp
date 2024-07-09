```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto it = strings.begin(); it != strings.end(); ++it){
        if(it->find(prefix) == 0)
            result.push_back(*it);
    }
    return result;
}

int main(){
    int numPassingTests = 0;
    assert(issame({ "xxx", "xxxAAA", "xxx" }, filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx")) );
    // Add more test cases here...
    return 0;
}
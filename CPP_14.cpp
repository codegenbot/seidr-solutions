#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> vec1 = all_prefixes("hello");
    std::vector<std::string> vec2 = all_prefixes("hell");
    
    assert(issame(vec1, vec2) == false);
    
    return 0;
}
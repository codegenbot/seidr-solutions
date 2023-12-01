#include <string>
#include <vector>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

bool total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

bool total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (std::string str : lst1) {
        totalChars1 += str.length();
    }
    
    for (std::string str : lst2) {
        totalChars2 += str.length();
    }
    
    return (totalChars1 < totalChars2);
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"this", "is"}, {"a", "test"}), {"a", "test"}));
    
    return 0;
}
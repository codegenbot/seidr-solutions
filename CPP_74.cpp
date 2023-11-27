#include <cassert>
#include <vector>
#include <string>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (std::string s : lst1) {
        totalChars1 += s.length();
    }
    
    for (std::string s : lst2) {
        totalChars2 += s.length();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implement your logic here
    return false;
}

int main() {
    assert(total_match({"this"}, {}).size() == 0);
    
    return 0;
}
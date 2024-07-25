#include <string>
#include <vector>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for (std::string str : a) {
        total_chars1 += str.length();
    }
    
    for (std::string str : b) {
        total_chars2 += str.length();
    }
    
    return total_chars1 == total_chars2;
}

int main() {
    assert(issame({"this"}, {}));
    
    return 0;
}
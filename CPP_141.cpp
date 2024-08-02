#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int digitCount = 0;
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        }
    }
    
    size_t dotPos = file_name.find('.');
    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }
    
    std::string beforeDot = file_name.substr(0, dotPos);
    std::string afterDot = file_name.substr(dotPos + 1);
    
    if (digitCount > 3 || !isalpha(beforeDot[0]) || (afterDot != "txt" && afterDot != "exe" && afterDot != "dll")) {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}
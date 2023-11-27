#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return total_match(a, b) == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;

    for (const std::string& str : lst1) {
        totalChars1 += str.length();
    }

    for (const std::string& str : lst2) {
        totalChars2 += str.length();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"this", "is", "a"}, {"test"}), {"test"}));
    assert(issame(total_match({"this", "is"}, {"a", "test"}), {"a", "test"}));
    assert(issame(total_match({}, {}), {}));
    
    return 0;
}
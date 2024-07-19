#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}) , {}));
   
    return 0;
}
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;

    for (const std::string& str : lst1) {
        total_chars1 += str.length();
    }

    for (const std::string& str : lst2) {
        total_chars2 += str.length();
    }

    return total_chars1 < total_chars2 ? lst1 : lst2;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));

    return 0;
}
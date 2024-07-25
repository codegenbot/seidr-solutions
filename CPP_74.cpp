#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    for (std::string str : lst1) {
        total_chars1 += str.length();
    }
    for (std::string str : lst2) {
        total_chars2 += str.length();
    }
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    // Additional test cases
    return 0;
}
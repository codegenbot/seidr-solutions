#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

std::vector<std::string> compareLists(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (const std::string& str : lst1) {
        total_chars1 += str.size();
    }

    for (const std::string& str : lst2) {
        total_chars2 += str.size();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame({"this"}, {}));
    assert(compareLists({"contest", "problem"}, {"code", "solution"}) == std::vector<std::string>{"code", "solution"});

    return 0;
}
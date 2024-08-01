#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int total_chars(std::vector<std::string> lst) {
    int total = 0;
    for (std::string str : lst) {
        total += str.length();
    }
    return total;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
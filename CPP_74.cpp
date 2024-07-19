#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int totalChars(int numChars) {
    return numChars;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (totalChars(lst1.size()) < totalChars(lst2.size())) {
        return lst1;
    } else {
        return totalChars(lst1.size()) == totalChars(lst2.size()) ? lst1 : lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
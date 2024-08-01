#include <iostream>
#include <vector>
#include <cassert>

int totalChars(const std::vector<std::string>& lst);
bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

int totalChars(const std::vector<std::string>& lst) {
    int total = 0;
    for(const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return totalChars(a) == totalChars(b);
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

void solveProblem() {
    assert(issame(total_match({"this"}, {}), {}));
}

int main() {
    solveProblem();
    return 0;
}
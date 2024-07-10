#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> a, std::vector<std::string> b) {
    return a;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
}
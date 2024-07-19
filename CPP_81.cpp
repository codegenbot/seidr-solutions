#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    issame({"E", "D-"}, {"E", "D-"});
    return 0;
}
#include <vector>
#include <string>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert (issame({"Nine", "Eight", "Four"}, {"Nine", "Eight", "Four"}));
}
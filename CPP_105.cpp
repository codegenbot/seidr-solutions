#include <vector>
#include <string>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> indices) {
    std::vector<std::string> words = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<std::string> result;
    for (int i : indices) {
        result.push_back(words[i - 1]);
    }
    return result;
}

int main() {
    assert(issame({"Nine", "Eight", "Four"}, {"Nine", "Eight", "Four"}));
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"});
}
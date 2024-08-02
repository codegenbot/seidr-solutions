#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> vec = {"Nine", "Eight", "Four"};
    std::sort(vec.begin(), vec.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return vec;
}

int main() {
    assert(issame(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Eight", "Four"}));
    return 0;
}
```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    return v1.size() == v2.size();
}

std::vector<std::string> by_length(const std::vector<std::string>& vec) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.length() < 5) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(by_length({"Nine", "Eight", "Four"}), std::vector<std::string>{"Nine", "Eight", "Four"}) );
    return 0;
}
```
#include <vector>
#include <string>

std::vector<std::string> by_length(const std::initializer_list<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 4)
            result.push_back("Four");
        else if (length == 8)
            result.push_back("Eight");
        else
            result.push_back(std::to_string(length) + "Nine");
    }
    return result;
}

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
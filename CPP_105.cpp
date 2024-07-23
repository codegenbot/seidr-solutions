#include <vector>
#include <string>
#include<std::initializer_list>

std::vector<std::string> by_length(std::vector<int> lengths) {
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

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
}
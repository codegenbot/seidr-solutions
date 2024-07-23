```
#include <vector>
#include <string>

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
    std::vector<int> lengths = {4, 8};
    std::vector<std::string> b = by_length(lengths);
    std::vector<std::string> a = by_length({4, 8});
    assert(issame(a, b));
    assert(!issame(by_length({9}), b));
}
```cpp
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> input) {
    std::vector<std::string> output;
    for (int i : input) {
        if (i == 1)
            output.push_back("One");
        else if (i == 4)
            output.push_back("Four");
        else if (i == 8)
            output.push_back("Eight");
        else if (i == 9)
            output.push_back("Nine");
    }
    return output;
}

bool issame(std::vector<std::string> a, std::vector<std::string>b) {
    // implement your logic here to compare two vectors
    // for now just check the sizes are equal
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::pair<std::string, int>> input = {std::make_pair("Nine", 1), std::make_pair("Eight", 2), std::make_pair("Four", 3)};
    auto output = by_length({std::get<1>(x) for x in input});
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> input) {
    std::vector<std::string> output;
    for (int i : input) {
        if (i == 4)
            output.push_back("Four");
        else if (i == 8)
            output.push_back("Eight");
        else if (i == 9)
            output.push_back("Nine");
    }
    return output;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::pair<std::string, int>> input = {std::make_pair("Nine", 1), std::make_pair("Eight", 2), std::make_pair("Four", 3)};
    auto output = by_length({std::get<1>(x) for x in input});
    assert(issame(by_length({1, 2, 3}), {std::get<0>(x) for x in input}));
    return 0;
}
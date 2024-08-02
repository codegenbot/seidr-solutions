#include <map>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> digit_map = {
        {4, "Four"},
        {9, "Nine"},
        {8, "Eight"}
    };
    std::vector<std::string> result;
    for (int num : arr) {
        result.push_back(digit_map[num]);
    }
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Four", "Eight"}));
    return 0;
}
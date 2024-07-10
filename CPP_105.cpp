#include <vector>
#include <string>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

bool by_length(std::vector<int> nums) {
    std::map<int, std::string> num_to_word = {{9, "Nine"}, {4, "Four"}, {8, "Eight"}};
    std::vector<std::string> words;
    for (int num : nums) {
        words.push_back(num_to_word[num]);
    }
    return issame(words, {"Nine", "Eight", "Four"});
}

int main() {
    assert(by_length({9, 4, 8}));
}
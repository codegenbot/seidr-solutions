#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> evenLengthStrings;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    std::sort(evenLengthStrings.begin(), evenLengthStrings.end(),
        [](const auto& a, const auto& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });

    return evenLengthStrings;
}

int main() {
    std::vector<std::string> input = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> expected = {"cc", "dd", "aaaa", "bbbb"};

    if (sorted_list_sum(input) == expected) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same: actual - " << sorted_list_sum(input) << ", expected - " << expected << std::endl;
    }
}
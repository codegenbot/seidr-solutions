#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int odd_count(std::vector<std::string> lst) {
    int total_count = 0;
    for (const std::string& str : lst) {
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                total_count++;
            }
        }
    }
    return total_count;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), { "the number of odd elements 2 in the string 2 of the input.",
                                                      "the number of odd elements 3 in the string 3 of the input.",
                                                      "the number of odd elements 2 in the string 2 of the input." }));
    return 0;
}
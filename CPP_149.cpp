#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst);

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst){
    std::vector<std::string> result;
    for (std::string word : lst) {
        if (word.length() % 2 == 0) {
            result.push_back(word);
        }
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}
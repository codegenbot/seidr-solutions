#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& strs) {
    std::vector<std::string> result;
    for (const auto& str : strs) {
        int sum = 0;
        for (char c : str) {
            if (isalpha(c)) {
                sum += isupper(c) ? 1 : 2;
            }
        }
        while (sum > 0) {
            result.push_back((sum % 3 == 0) ? "cc" : (sum % 3 == 1) ? "dd" : "aaaa");
            sum /= 3;
        }
    }
    return std::vector<std::string>(std::unique(result.begin(), result.end()), result.end());
}

int mainFunction() {
    std::cout << "Result: ";
    for (const auto& str : sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    if (!issame(std::vector<std::string>({"cc", "dd", "aaaa", "bbbb"}), {"cc", "dd", "aaaa", "bbbb"}))
        return 1;
    return 0;
}
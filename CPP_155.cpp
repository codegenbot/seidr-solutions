#include <vector>
#include <string>
#include <cassert>
#include <iostream>

bool issame_cpp(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string num_str = std::to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    std::vector<int> test_a = { 2, 3 };
    std::vector<int> test_b = { 2, 3 };
    
    std::vector<int> result_counts = even_odd_count(1234);

    std::cout << "issame_cpp test: " << (issame_cpp(test_a, test_b) ? "Passed" : "Failed") << std::endl;
    std::cout << "Even count: " << result_counts[0] << std::endl;
    std::cout << "Odd count: " << result_counts[1] << std::endl;

    return 0;
}
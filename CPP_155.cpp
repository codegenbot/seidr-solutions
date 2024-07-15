#include <vector>
#include <string>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    // Test the even_odd_count function
    int num = 123456789;
    std::vector<int> result = even_odd_count(num);
    for (int count : result) {
        std::cout << count << " ";
    }
    return 0;
}
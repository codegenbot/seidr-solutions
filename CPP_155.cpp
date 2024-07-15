#include <vector>
#include <string>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
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
    int num;
    std::cin >> num;
    std::vector<int> result = even_odd_count(num);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}
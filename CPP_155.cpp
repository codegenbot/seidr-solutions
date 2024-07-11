#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b);

std::vector<int> even_odd_count(int num);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> counts = even_odd_count(num);
    std::cout << counts[0] << " " << counts[1];
    
    return 0;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts = {0, 0};
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}
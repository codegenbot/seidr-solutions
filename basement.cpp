#include <iostream>
#include <vector>

int basement(std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    std::vector<int> vec{2, -3, 5, -8, 4};
    int result = basement(vec);
    std::cout << "First index where sum becomes negative: " << result << std::endl;
    return 0;
}
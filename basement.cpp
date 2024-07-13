#include <vector>

int findFirstNegativeIndex(const std::vector<int>& vec) {
    for (int i = 0; i <= vec.size() - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += vec[j];
        }
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Read input from user
    int n;
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    // Call the function and print the result
    int index = findFirstNegativeIndex(vec);
    if (index == -1)
        std::cout << "No negative sum found" << std::endl;
    else
        std::cout << index << std::endl;

    return 0;
}
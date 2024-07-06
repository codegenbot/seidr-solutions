#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int x : l) {
        if (x >= t)
            return false;
    }
    return true;
}

int main() {
    std::vector<int> numbers;
    int threshold;

    // Input the numbers and the threshold
    std::cout << "Enter numbers (space-separated), then enter the threshold: ";
    for(int i = 0; i < 10; ++i) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold.\n";
    } else {
        std::cout << "Some numbers are not below the threshold.\n";
    }

    return 0;
}
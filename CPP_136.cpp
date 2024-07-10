#include <iostream>
#include <vector>
#include <climits>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(const std::vector<int>& lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    std::vector<int> input;
    int numElements;
    std::cin >> numElements;
    for (int i = 0; i < numElements; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    std::vector<int> result = largest_smallest_integers(input);
    if (issame(result, {-3, 1})) {
        std::cout << "The output is correct." << std::endl;
    } else {
        std::cout << "The output is incorrect." << std::endl;
    }

    return 0;
}
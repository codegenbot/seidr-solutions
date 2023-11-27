#include <vector>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> rollingMax;
    int maxNum = numbers[0];
    rollingMax.push_back(maxNum);

    for(int i = 1; i < numbers.size(); i++) {
        if(numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
        rollingMax.push_back(maxNum);
    }

    return rollingMax;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Compare the vectors a and b to check if they are the same
    // Implement this function or use a library function for vector comparison

    // Return true if a and b are the same, false otherwise
    return false;
}

int main() {
    assert (issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}
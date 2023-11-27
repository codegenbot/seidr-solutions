#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> rolling_max(const std::vector<int>& numbers) {
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

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}
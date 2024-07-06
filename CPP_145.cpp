#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.push_back({getSumOfDigits(nums[i]), i});
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}

int getSumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> input({0,6,6,-76,-21,23,4});
    std::vector<int> output = order_by_points(input);
    
    if (issame(output, { {-76, -21, 0, 4, 23, 6, 6}}))
        printf("The test case has passed.\n");
    else
        printf("The test case has failed.\n");

    return 0;
}
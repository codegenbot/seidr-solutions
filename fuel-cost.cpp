#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] / 3 - 2);
    }

    std::cout << sum;

    return 0;
}
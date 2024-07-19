#include <vector>
#include <iostream>

using namespace std;

namespace Solution {
    vector<int> sum_product(vector<int> nums) {
        int sum = 0, product = 1;
        for (int num : nums) {
            sum += num;
            product *= num;
        }
        return {sum, product};
    }
}

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    auto result = Solution::sum_product(input);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
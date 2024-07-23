#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> order_by_points(const vector<int>& nums){
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int num_a = abs(a), num_b = abs(b);
        while (num_a > 0) {
            sum_a += num_a % 10;
            num_a /= 10;
        }
        while (num_b > 0) {
            sum_b += num_b % 10;
            num_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(order_by_points({0,6,6,-76,-21,23,4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
    
    cout << "All test cases passed successfully!" << endl;
    
    return 0;
}
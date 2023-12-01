#include <vector>
#include <algorithm>
#include <cassert>

using std::string;
using Vector = std::vector<int>;

bool compare(int a, int b) {
    int sum_a = 0, sum_b = 0;
    string str_a = std::to_string(a);
    string str_b = std::to_string(b);
    
    for (char c : str_a) {
        if (c != '-') {
            sum_a += c - '0';
        }
    }
    
    for (char c : str_b) {
        if (c != '-') {
            sum_b += c - '0';
        }
    }
    
    if (sum_a == sum_b) {
        return a < b;
    }
    
    return sum_a < sum_b;
}

Vector order_by_points(Vector nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(Vector a, Vector b){
    return a == b;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    string strA = to_string(a);
    string strB = to_string(b);
    
    for (char c : strA) {
        if (c != '-') {
            sumA += c - '0';
        }
    }
    
    for (char c : strB) {
        if (c != '-') {
            sumB += c - '0';
        }
    }
    
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main() {
    assert(order_by_points({0,6,6,-76,-21,23,4}) == vector<int>({-76, -21, 0, 4, 23, 6, 6}));
    cout << "Test passed!" << endl;
    return 0;
}
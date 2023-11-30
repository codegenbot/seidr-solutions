#include <algorithm>

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
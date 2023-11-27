#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    int tempA = abs(a), tempB = abs(b);
    
    while (tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }
    
    while (tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }
    
    if (sumA == sumB)
        return a < b;
    
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});
    vector<int> expected = {-76, -21, 0, 4, 23, 6, 6};

    bool same = issame(result, expected);
    return 0;
}
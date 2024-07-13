#include <algorithm>
#include <vector>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<int> result = nums;
    sort(result.begin(), result.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        if (sumA == sumB)
            return a - b < 0;
        return sumA < sumB;
    });
    return result;
}
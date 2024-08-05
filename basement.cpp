#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) return j;
        }
    }
    return -1;
}

int main() {
    vector<int> test1 = {-2, 3, 4};
    cout << basement(test1) << endl;

    vector<int> test2 = {5, -4, -7, 9, 8};
    cout << basement(test2) << endl;

    return basement({0, 1, -2, 3, 10});
}
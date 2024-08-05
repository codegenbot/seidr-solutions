#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> test1 = {-2, 3, 4};
    cout << basement(test1) << endl;

    vector<int> test2 = {5, -4, -7, 9, 8};
    cout << basement(test2) << endl;

    return 0;
}
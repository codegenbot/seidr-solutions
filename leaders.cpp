#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int rightmost = nums.back();
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= rightmost) {
            rightmost = nums[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> input = {17, 11, 13, 2, 3, 7, 19};
    vector<int> result = leaders(input);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int rightmost = nums.back();
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= rightmost) {
            rightmost = nums[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    return 0;
}
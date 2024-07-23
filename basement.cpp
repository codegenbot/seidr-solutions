#include <vector>
using namespace std;

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1; 
        else if (sum == 0) 
            sum = 0;
    }
    return -1;
}

int main() {
    vector<int> test = {-5, -3, 4, 3};
    cout << basement(test) << endl;
    return 0;
}
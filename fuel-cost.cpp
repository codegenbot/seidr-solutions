```c++
#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = static_cast<int>(floor((double)num / 3));
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3}; 
    int result = fuelCost(nums);
    cout << "Result: " << result << endl;
    return 0;
}
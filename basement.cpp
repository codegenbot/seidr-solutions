#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> numbers = {-5, 1, -3, 4};
    int result = basement(numbers);
    cout << "First index with negative sum is: " << result << endl;
    return 0;
}
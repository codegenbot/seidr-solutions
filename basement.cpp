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
    // Example usage:
    vector<int> example1 = {1, -1};
    int result1 = basement(example1);
    cout << "The first index where the sum becomes negative is: " << result1 << endl;

    vector<int> example2 = {1, -100};
    int result2 = basement(example2);
    cout << "The first index where the sum becomes negative is: " << result2 << endl;

    // Add more examples as needed...

    return 0;
}
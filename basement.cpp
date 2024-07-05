#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> numbers = {10, -20, 30, -5, 40};
    int result = basement(numbers);
    cout << "The basement is at index: " << result << endl;
    return 0;
}
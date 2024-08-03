#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> numbers = {-7,1,5,10,6};
    cout << "Basement index is: " << basementIndex(numbers) << endl;
    return 0;
}
#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << findFirstNegativeIndex(numbers) << endl;
    return 0;
}
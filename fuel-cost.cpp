#include <vector>
using namespace std;

int solve(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        if (num >= 3) {
            sum += ((num / 3) - 2);
        }
    }
    return sum;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; ++i){
        cin >> numbers[i];
    }

    cout << solve(numbers) << endl;

    return 0;
}
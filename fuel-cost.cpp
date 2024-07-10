#include <vector>
using namespace std;

int solve(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3 - 2);
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    cout << solve(input) << endl;
    return 0;
}
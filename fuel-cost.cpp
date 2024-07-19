#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for(int num : nums) {
        int temp = (num / 3);
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    while(n--) {
        int num; 
        cin >> num;
        nums.push_back(num);
    }
    cout << fuelCost(nums) << endl;
    return 0;
}
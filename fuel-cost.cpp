#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    while(cin >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}
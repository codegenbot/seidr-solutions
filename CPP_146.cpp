#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string str = to_string(abs(num));
            if((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums;
    int n, elem;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> elem;
        nums.push_back(elem);
    }
    cout << "Special count: " << specialFilter(nums) << endl;
    return 0;
}
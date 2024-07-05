#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10) continue;
        num = abs(num);
        string str = to_string(num);
        if ((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums;
    int n, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        nums.push_back(temp);
    }
    cout << specialFilter(nums) << endl;
    return 0;
}
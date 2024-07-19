#include <iostream>
#include <vector>
#include <string>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = to_string(num);
            if ((numStr.front() - '0') % 2 != 0 && (numStr.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> input1 = {15, -73, 14, -15};
    cout << specialFilter(input1) << endl;

    vector<int> input2 = {33, -2, -3, 45, 21, 109};
    cout << specialFilter(input2) << endl;

    return 0;
}
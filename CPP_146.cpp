#include <vector>
#include <string>
#include <iostream>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str = to_string(num);
            if ((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    cout << specialFilter({15, 22, 33, 44, 53}) << endl; // Sample test
    return 0;
}
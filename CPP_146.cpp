#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> test1 = {123, 456, 789};
    cout << "Test 1: " << specialFilter(test1) << endl;
    vector<int> test2 = {-12, 24, -3456};
    cout << "Test 2: " << specialFilter(test2) << endl;
    vector<int> test3 = {11, 22, 33, 44, 55};
    cout << "Test 3: " << specialFilter(test3) << endl;
    return 0;
}
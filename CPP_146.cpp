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
    vector<int> numbers = {123, 456, 789, 1011};
    cout << "The number of integers in the given list that satisfy the condition is: " << specialFilter(numbers) << endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {123, -456, 789};
    int result = count_nums(nums);
    cout << "Count: " << result << endl;
    
    return 0;
}
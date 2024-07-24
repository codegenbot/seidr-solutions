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
    vector<int> numbers = {123, -456, 789, 90123};
    cout << "Number of special numbers: " << specialFilter(numbers) << endl;
    return 0;
}
#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    vector<int> test1 = {11, 22, 33};
    cout << specialFilter(test1) << endl;
    vector<int> test2 = {-11, -22, -33};
    cout << specialFilter(test2) << endl;
    return 0;
}
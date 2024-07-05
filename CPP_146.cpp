#include <vector>
#include <string>
#include <cassert>
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
    assert(specialFilter({}) == 0);
    assert(specialFilter({11, 22, 33, 44, 55}) == 3);

    return 0;
}
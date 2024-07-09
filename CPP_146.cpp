```cpp
#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / abs(num)) % 10 % 2 != 0 || (abs(num) % 10) % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> test1 = {11, -12, 13, -14};
    assert(specialFilter(test1) == 3);
    
    vector<int> test2 = {15, 16, 17, -18, 19};
    assert(specialFilter(test2) == 4);
    
    vector<int> test3 = {-20, 21, -22, 23, -24};
    assert(specialFilter(test3) == 5);

    return 0;
}
#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if (x == 0 || x % 11 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    // You can test the function with different input vectors here.
    return 0;
}
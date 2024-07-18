#include <vector>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int specialFilter(const vector<int>& nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = std::to_string(abs(num));
            if ((numStr.front() - '0') % 2 != 0 && (numStr.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(specialFilter({10, 15, 25}) == 2);
    return 0;
}
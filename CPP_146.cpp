#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for(int num : nums) {
        if(num > 10) {
            string str = to_string(abs(num));
            if((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    return 0;
}
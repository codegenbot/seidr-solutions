#include <iostream>
#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(abs(num));
        if(num > 10 && (numStr[0] - '0') % 2 != 0 && (numStr[numStr.length() - 1] - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({1, 2, 3, 4}) == 0);
    assert(specialFilter({11, 12, 13, 14}) == 4);
    assert(specialFilter({-11, -12, -13, -14}) == 4);
    assert(specialFilter({11, 12, 13, 14, 15, 16, 17, 18, 19, 20}) == 4);
    assert(specialFilter({-11, -12, -13, -14, -15, -16, -17, -18, -19, -20}) == 4);
    assert(specialFilter({-11, 12, -13, 14, -15, 16, -17, 18, -19, 20}) == 0);
    // add more test cases here

    return 0;
}
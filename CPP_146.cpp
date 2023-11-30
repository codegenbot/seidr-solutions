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
    assert(specialFilter({1, 2, 3, 4, 5, 6, 7, 8, 9}) == 0);
    assert(specialFilter({12, 34, 56, 78, 90}) == 0);
    assert(specialFilter({11, 22, 33, 44, 55, 66, 77, 88, 99}) == 9);
    assert(specialFilter({-12, -34, -56, -78, -90}) == 0);
    assert(specialFilter({-11, -22, -33, -44, -55, -66, -77, -88, -99}) == 9);
    assert(specialFilter({123, 456, 789, 101112, 131415, 161718, 192021}) == 4);
    assert(specialFilter({-123, -456, -789, -101112, -131415, -161718, -192021}) == 4);

    return 0;
}
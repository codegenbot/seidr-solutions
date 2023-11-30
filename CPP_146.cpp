#include <iostream>
#include <vector>
#include <cassert>
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
    assert(specialFilter({1, 2, 3, 4, 5}) == 0);
    assert(specialFilter({12, 23, 34, 45, 56}) == 0);
    assert(specialFilter({11, 22, 33, 44, 55}) == 5);
    assert(specialFilter({-11, -22, -33, -44, -55}) == 5);
    assert(specialFilter({-123, 456, -789, 101112, 131415}) == 3);
    assert(specialFilter({-123, 456, -789, -101112, 131415}) == 2);
    assert(specialFilter({-123, 456, -789, -101112, 131413}) == 2);
    assert(specialFilter({-123, 456, -789, -101112, 131413, -151617}) == 3);
    assert(specialFilter({-123, 456, -789, -101112, 131413, -151616}) == 2);

    return 0;
}
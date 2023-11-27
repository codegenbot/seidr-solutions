#include <iostream>
#include <vector>
#include <string>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string str = to_string(num);
        int firstDigit = str[0] - '0';
        int lastDigit = str[str.size()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({11, 22, 33, 44, 55}) == 0);
    assert(specialFilter({12, 21, 34, 43, 56}) == 5);
    assert(specialFilter({15, 26, 37, 48, 59}) == 0);
    assert(specialFilter({16, 23, 38, 47, 52}) == 1);
    assert(specialFilter({17, 20, 39, 46, 51}) == 2);
    assert(specialFilter({18, 29, 30, 41, 50}) == 0);
    assert(specialFilter({19, 28, 31, 42, 53}) == 1);
    // Add more test cases to verify the function
    return 0;
}
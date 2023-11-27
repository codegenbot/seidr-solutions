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
    assert(specialFilter({10, 12, 15, 18, 21, 27}) == 3);
    assert(specialFilter({9, 11, 13, 15, 17, 19}) == 0);
    assert(specialFilter({123, 456, 789, 135, 468, 579}) == 2);
    assert(specialFilter({22, 33, 44, 55, 66, 77}) == 0);
    return 0;
}
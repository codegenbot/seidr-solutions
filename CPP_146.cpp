#include <iostream>
#include <vector>
#include <string>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string num_str = to_string(num);
        int first_digit = num_str[0] - '0';
        int last_digit = num_str[num_str.length() - 1] - '0';
        if(num > 10 && first_digit % 2 != 0 && last_digit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({1, 2, 10, 3, 44}) == 0);
    assert(specialFilter({11, 25, 32, 47, 68}) == 2);
    assert(specialFilter({17, 23, 46, 54, 79}) == 3);
    return 0;
}
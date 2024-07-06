#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10 && ((num % 10) % 2 != 0)) { // Check if the number is greater than 10 and both first and last digits are odd
            count++;
        }
    }
    return count;
}
#include <iostream>
#include <vector>
using namespace std;

int digit_sum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int count_nums(vector<int> n) {
    int count = 0;
    for(int num : n) {
        if(digit_sum(num) > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Example assertion to test the function
    assert(count_nums({1}) == 1);
    return 0;
}
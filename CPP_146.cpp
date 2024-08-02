#include <iostream>
#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(abs(num) > 10 && (num % 10) % 2 != 0 && (abs(num) / 10) % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {1, 11, 12, 13, 14, 15};
    cout << specialFilter(numbers);
    return 0;
}
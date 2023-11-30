#include <iostream>
#include <vector>
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

int main(){
    cout << specialFilter({1, 2, 3, 123, 456, 789}) << endl;
    return 0;
}
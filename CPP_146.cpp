#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string str = to_string(abs(num));
            if((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    // You can add some test cases here to check the function
    cout << specialFilter({11, 22, 33, 44, 55, 66}) << endl; // 4
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(abs(num));
        if(numStr[0] % 2 == 1 && numStr[numStr.length()-1] % 2 == 1 && num > 10){
            count++;
        }
    }
    return count;
}
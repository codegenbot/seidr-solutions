#include <vector>
#include <string>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string strNum = to_string(abs(num));
            if((strNum.front() - '0') % 2 == 1 && (strNum.back() - '0') % 2 == 1){
                count++;
            }
        }
    }
    return count;
}

assert(specialFilter({}) == 0);
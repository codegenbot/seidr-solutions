#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string numStr = to_string(abs(num));
            if(numStr.front() % 2 != 0 && numStr.back() % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    
    return 0;
}
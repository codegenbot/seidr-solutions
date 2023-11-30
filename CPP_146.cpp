#include <vector>
#include <string>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(abs(num));
        if(numStr.front() % 2 != 0 && numStr.back() % 2 != 0 && num > 10){
            count++;
        }
    }
    return count;
}

int main(){
    // Call specialFilter() function with test cases
    assert(specialFilter({}) == 0);

    return 0;
}
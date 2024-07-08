#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 100) % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    assert(specialFilter({}) == 0);
    std::vector<int> test1 = {11,12,13,14};
    assert(specialFilter(test1) == 3);
    
    std::vector<int> test2 = {111,112,113,114,115};
    assert(specialFilter(test2) == 5);
    
    std::vector<int> test3 = {101,102,103,104};
    assert(specialFilter(test3) == 0);
    
    std::vector<int> test4 = {1001,1002,1003,1004};
    assert(specialFilter(test4) == 4);
    
    return 0;
}
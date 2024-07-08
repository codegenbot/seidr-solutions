```cpp
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
    std::vector<int> test1 = {12, 15, 18};
    assert(specialFilter(test1) == 3);

    std::vector<int> test2 = {14, 19, 21, 23, 25};
    assert(specialFilter(test2) == 4);
    
    std::vector<int> test3 = {11, 16, 22, 27};
    assert(specialFilter(test3) == 1);

    std::vector<int> test4 = {13, 17, 20, 25, 30};
    assert(specialFilter(test4) == 2);
}
```cpp
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

int main(){
    assert(specialFilter({}) == 0);
    assert(specialFilter({11,12,13,14,15}) == 5);
    assert(specialFilter({1,2,3,4,5,-11,-12,-13,-14,-15}) == 10);
    assert(specialFilter({16,17,18,19,20,30,31,32,33,34,35}) == 0);
    return 0;
}
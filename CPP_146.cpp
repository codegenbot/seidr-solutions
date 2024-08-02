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
    assert(specialFilter({11,12,13,14,15,16,17,18,19,110,111,112,113,114,115,116,117,118,119}) == 20);
    assert(specialFilter({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19}) == 0);
    return 0;
}
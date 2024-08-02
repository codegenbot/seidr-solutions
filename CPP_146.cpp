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
    assert(specialFilter({1, 11, 21, 31}) == 4);
    assert(specialFilter({-1, -11, -21, -31}) == 4);
    assert(specialFilter({12, 22, 32}) == 3);
    assert(specialFilter({-12, -22, -32}) == 3);
    return 0;
}
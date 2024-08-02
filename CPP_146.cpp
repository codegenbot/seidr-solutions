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
    assert(specialFilter({11,12,13,14,15}) == 3);
    assert(specialFilter({-1,-11,-21,-31}) == 2);
    assert(specialFilter({10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,200,300,400,500,600,700,800,900,1000}) == 12);
    return 0;
}
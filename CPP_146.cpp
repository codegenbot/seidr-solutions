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
    assert(specialFilter({11, 12, 13, 14, 15}) == 4);
    assert(specialFilter({20, 21, 22, 23, 24, 25, 26, 27, 28, 29}) == 9);
    return 0;
}
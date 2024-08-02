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
    assert(specialFilter({1, 11, 21, -1, -11, -21}) == 3);
    assert(specialFilter({10, 20, 30, -10, -20, -30}) == 0);
    return 0;
}
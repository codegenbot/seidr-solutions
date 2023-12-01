#include <vector>
#include<assert.h>

int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int temp = abs(num);
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main(){
    // Test your function here
    assert(count_nums({1}) == 1);
    assert(count_nums({-12, 34, -56, 78, 90}) == 5);
    assert(count_nums({123, 456, 789}) == 3);
    assert(count_nums({-100, 200, -300, 400, -500}) == 5);

    return 0;
}
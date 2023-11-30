#include <vector>
#include <cassert>

int count_nums(std::vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int temp = abs(num);
        while(temp != 0){
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
    assert(count_nums({1}) == 1);
    assert(count_nums({0, 10, -5, 12345}) == 4);
    assert(count_nums({-100, -200, -300}) == 3);
    assert(count_nums({0, 0, 0, 0}) == 0);
    
    return 0;
}
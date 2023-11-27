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

int main() {
    assert(count_nums({1}) == 1);
    assert(count_nums({1, -2, 3, -4}) == 4);
    assert(count_nums({10, -20, 30, -40}) == 4);
    assert(count_nums({123, -456, 789, -12}) == 4);
    
    return 0;
}
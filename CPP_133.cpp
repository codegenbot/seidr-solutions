#include <vector>

int sum_squares(std::vector<int> lst){
    int sum = 0;
    for (int num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

int main(){
    assert(sum_squares({-1,1,0}) == 2);
    return 0;
}
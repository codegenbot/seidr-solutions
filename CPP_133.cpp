#include <vector>
#include <cmath>
#include <cassert>
#include <initializer_list>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(size_t i=0; i<lst.size(); i++){
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    // Test the sum_squares function
    assert(sum_squares({-1,1,0}) == 2);

    return 0;
}
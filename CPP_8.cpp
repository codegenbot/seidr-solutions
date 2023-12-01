#include <vector>
#include <cassert>

std::vector<int> sum_product(std::vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(is_same(sum_product({10}), {10, 10}));
    
    return 0;
}
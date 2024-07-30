
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    int sum = 0;
    int product = 1;
    
    for (int num : a) {
        sum += num;
        product *= num;
    }
    
    return (sum == b[0] && product == b[1]);
}

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    
    return 0;
}
#include <vector>
#include <tuple>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::tuple<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}
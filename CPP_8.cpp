#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers){
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}
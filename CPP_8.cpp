#include <vector>

vector<int> sum_product(vector<int> numbers);

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}
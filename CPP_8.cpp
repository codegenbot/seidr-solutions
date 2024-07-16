#include <vector>

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    vector<int> result = sum_product({10});
    
    assert(result[0] == 10 && result[1] == 10);
    
    return 0;
}
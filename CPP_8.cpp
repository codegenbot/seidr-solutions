#include <vector>

vector<int> sum_product(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }
    
    vector<int> result;
    result.push_back(sum);
    result.push_back(product);
    
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

int main() {
    vector<int> result = sum_product({10});
    assert(issame(result, {10, 10}));
    
    return 0;
}
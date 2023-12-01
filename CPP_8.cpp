#include <iostream>
#include <vector>

using std::vector;

void sum_product(vector<int>& numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    numbers = {sum, product};
}

int main() {
    vector<int> numbers = {10};
    sum_product(numbers);
    assert (numbers == vector<int>({10, 10}));
    
    return 0;
}
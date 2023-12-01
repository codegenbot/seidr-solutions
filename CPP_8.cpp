#include <vector>

bool issame(int a, int b){
    return a == b;
}

vector<int> sum_product(const vector<int>& numbers);

int main() {

    vector<int> numbers = {2, 3, 4, 5};
    vector<int> result = sum_product(numbers);

    return 0;
}

vector<int> sum_product(const vector<int>& numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}
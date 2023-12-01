#include <vector>

bool issame(int a, int b){
    return (a == b);
}

std::vector<int> sum_product(std::vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

int main(){
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> result = sum_product(numbers);
    
    return 0;
}
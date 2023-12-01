#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> sum_product(std::vector<int> numbers);

std::vector<int> sum_product(std::vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}
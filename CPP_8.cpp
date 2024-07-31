#include <vector>

vector<int> sum_product(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main(){
    // main function logic here
    return 0;
}
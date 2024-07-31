#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main() {
    // Main function implementation here
    return 0;
}
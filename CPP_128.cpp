#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        sum += abs(arr[i]);
        if(arr[i] < 0){
            product *= -1;
        }
    }
    
    return sum * product;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    // ... additional test cases
    return 0;
}
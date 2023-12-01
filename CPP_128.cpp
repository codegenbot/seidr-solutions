#include <iostream>
#include <vector>

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    // Test the code with sample inputs
    vector<int> arr = {1, -2, 3, -4, 5};
    int result = prod_signs(arr);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
#include <vector>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int sign = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sign *= 1;
        }
        else if(arr[i] < 0){
            sign *= -1;
        }
        
        sum += abs(arr[i]);
    }
    
    return sign * sum;
}

int main() {
    // Test cases
    std::vector<int> arr1 = {1, -2, 3, -4, 5};
    std::cout << prod_signs(arr1) << std::endl; // Output: -25
    
    std::vector<int> arr2 = {-1, -2, -3, -4, -5};
    std::cout << prod_signs(arr2) << std::endl; // Output: -15
    
    std::vector<int> arr3 = {0, 0, 0, 0, 0};
    std::cout << prod_signs(arr3) << std::endl; // Output: 0
    
    std::vector<int> arr4 = {};
    std::cout << prod_signs(arr4) << std::endl; // Output: -32768

    return 0;
}
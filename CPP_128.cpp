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
    // Add your test cases here
    std::vector<int> arr1 = {1, -2, 3, -4, 5};
    std::vector<int> arr2 = {-1, -2, -3, -4, -5};
    std::vector<int> arr3 = {0, 0, 0, 0};
    
    int result1 = prod_signs(arr1);
    int result2 = prod_signs(arr2);
    int result3 = prod_signs(arr3);
    
    return 0;
}
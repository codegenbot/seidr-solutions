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
    // Test cases
    vector<int> arr1 = {1, -2, 3, -4, 5};
    vector<int> arr2 = {-1, -2, -3, -4, -5};
    vector<int> arr3 = {0, 1, 2, 3, 4, 5};
    
    int result1 = prod_signs(arr1);
    int result2 = prod_signs(arr2);
    int result3 = prod_signs(arr3);
    
    return 0;
}
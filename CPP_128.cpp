#include <vector>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int sign = 1;
    int product = 1;
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
    std::vector<int> test1 = {1, 2, 3};
    std::vector<int> test2 = {1, -2, 3};
    std::vector<int> test3 = {-1, -2, -3};
    std::vector<int> test4 = {};
    
    int result1 = prod_signs(test1);
    int result2 = prod_signs(test2);
    int result3 = prod_signs(test3);
    int result4 = prod_signs(test4);
    
    return 0;
}
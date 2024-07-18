#include <vector>

int prod_signs(std::vector<int> arr){
    if(arr.empty()) return 0;

    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        
        sum += abs(num);
    }
    
    return product * sum;
}
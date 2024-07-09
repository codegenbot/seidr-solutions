#include <vector>

int prod_signs(std::vector<int> arr){
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        product *= (num == 0) ? 1 : (num > 0 ? 1 : -1);
        sum += abs(num);
    }
    
    return product * sum;
}

int main() {
    assert(prod_signs(std::vector<int>{-1, 1, 1, 0}) == 0);
    
    return 0;
}
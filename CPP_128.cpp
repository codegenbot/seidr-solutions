#include <iostream>
#include <vector>
#include <cassert>

int main() {
    int prod_signs(std::vector<int> arr){
        int sum = 0;
        int product = 1;
        
        if(arr.empty()){
            return -32768;
        }
        
        for(int i=0; i<arr.size(); i++){
            sum += abs(arr[i]);
            product *= (arr[i] >= 0) ? 1 : -1;
        }
        
        return sum * product;
    }

    assert(prod_signs({-1, 1, 1, 0}) == 0);
    assert(prod_signs({5, -3, 2}) == -30);
    assert(prod_signs({-2, -2, -2, -2}) == -16);
    assert(prod_signs({1, 2, 3, 4, 5}) == 120);
    assert(prod_signs({}) == -32768);

    std::cout << "All test cases passed.\n";

    return 0;
}
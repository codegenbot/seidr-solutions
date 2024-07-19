#include <vector>  // Include the necessary header
#include <cstdlib> // Include for abs function
#include <cassert> // Include for assert function

using namespace std;

int prod_signs(const vector<int>& arr) {
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        
        sum_magnitudes += abs(num);
    }
    
    return product * sum_magnitudes;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0); // Pass a vector<int> type parameter
    return 0;
}
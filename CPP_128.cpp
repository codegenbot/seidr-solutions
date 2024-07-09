#include <vector>
#include <cassert>

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
        } else if (num < 0) {
            signProduct *= -1;
        }
        
        sumMagnitudes += abs(num);
    }
    
    return signProduct * sumMagnitudes;
}

int main() {
    // Test cases
    assert(prod_signs({1, 2, 3}) == 6);
    assert(prod_signs({-1, -2, -3}) == -6);
    assert(prod_signs({-5, 10, -4}) == -19);
    
    return 0;
}
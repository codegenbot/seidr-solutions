#include <vector>
#include <cstdlib>

using namespace std;

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        
        sum += abs(num);
    }
    
    return product * sum;
}

prod_signs({-1, 1, 1, 0});
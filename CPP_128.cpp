#include <vector>

int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it == 0) return 0; 
        product *= (*it > 0 ? 1 : -1);
    }
    return product;
}
#include <iostream>
#include <vector>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (arr.empty()) { 
        return 0; 
    }

    return product * sum;

}

int main() {
    int result = prod_signs({1, 2, 3}); 
    std::cout << "Product of signs and sum: " << result << std::endl;
    return 0;
}
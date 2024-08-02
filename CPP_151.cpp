#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    int count = 0;
    
    while(std::cin >> num) {
        lst.push_back(num);
    }
    
    long long odd_sum = double_the_difference(lst);
    std::cout << "The sum of the squares of all positive integers in the input is: " << odd_sum << std::endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float val;
    while(std::cin >> val) {
        lst.push_back(val);
    }
    long long result = double_the_difference(lst);
    std::cout << "The difference is: " << result << "\n";
    return 0;
}
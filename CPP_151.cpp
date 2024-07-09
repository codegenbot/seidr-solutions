#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> input;
    float odd_sum = 0.0;  

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        float num;
        std::cout << "Enter element "<<i+1<<": ";
        std::cin >> num;
        input.push_back(num);
    }

    odd_sum = 0.0;  
    for (float num : input) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += num * num;
        }
    }

    assert(double_the_difference(input) == odd_sum);

    return 0;
}
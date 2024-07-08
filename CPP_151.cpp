#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum; 

    std::vector<float> numbers = {1.5f, 3.0f, -4.2f, 0.7f};
    for (float number : numbers) {
        if (number > 0 && floor(number) == number) {
            lst.push_back(number);
        }
    }
    odd_sum = double_the_difference(lst); 
    std::cout << "Sum of the squares: " << odd_sum << std::endl;
    return 0;
}
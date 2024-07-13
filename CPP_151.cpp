#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (fmod(num, 2.0) != 0.0) { // check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0;

    for(int i=1; i<=5; i++) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> num;
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (fmod(num, 2.0) != 0.0) { // check if number is odd
                odd_sum += pow(num, 2);
            }
        }
        lst.push_back(num);
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}
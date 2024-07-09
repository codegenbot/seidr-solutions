#include <vector>
#include <cmath>

double long_the_difference(std::vector<double> lst) {
    double sum = 0;
    for (double num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {...}; // your code here
    double odd_sum = long_the_difference(lst);
    assert(long_the_difference(lst) == odd_sum );
    return 0;
}
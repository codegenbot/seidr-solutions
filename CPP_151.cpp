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
    std::vector<double> lst = {1.5, 3.0, 4.5};
    double odd_sum = long_the_difference(lst);
    assert(odd_sum == 7.25);  
    return 0;
}
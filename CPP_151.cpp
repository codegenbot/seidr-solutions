#include <iostream>
#include <list>

double double_the_difference(std::list<double> lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum * 2.0;
}

int main() {
    std::list<double> lst = {1.5, 2.0, 3.0, 4.5, 5.0};
    double odd_sum = double_the_difference(lst);
    std::cout << "Double the sum of squares of odd integers in the list: " << odd_sum << std::endl;
    return 0;
}
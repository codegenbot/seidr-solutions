#include <iostream>
#include <vector>
#include <cmath>

long double double_the_difference(std::vector<float> lst) {
    long double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float num;
        std::cin >> num;
        lst.push_back(num);
    }

    long double odd_sum = double_the_difference(lst);

    std::cout << odd_sum << std::endl;

    return 0;
}
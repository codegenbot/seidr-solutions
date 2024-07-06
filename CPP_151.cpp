#include <vector>
#include <cmath>
#include <initializer_list>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && int(num + 0.5) == num) { 
            sum += pow(int(num + 0.5), 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst;
    double temp;

    while(std::cin >> temp) {
        lst.push_back(temp);
    }

    int odd_sum = double_the_difference(lst);

    return 0;
}
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float n;
    while(std::cin >> n) {
        lst.push_back(n);
    }
    long long result = double_the_difference(lst);
    std::cout << result << std::endl;
    return 0;
}
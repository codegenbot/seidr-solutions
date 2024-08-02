#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float data;
    
    while (std::cin >> data) {
        lst.push_back(data);
    }

    long long result = double_the_difference(lst);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}
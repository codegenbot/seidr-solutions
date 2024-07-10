#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << sum;

    return 0;
}
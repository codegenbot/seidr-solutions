#include <cmath>

int closestInteger(double num) {
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    int result = closestInteger(num);
    std::cout << result;
    return 0;
}
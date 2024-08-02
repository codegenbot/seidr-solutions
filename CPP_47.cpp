#include <iostream>

float median(std::vector<float> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2;
    } else {
        return l[n / 2];
    }
}

int main() {
    std::vector<float> v = {3, 1, 2, 4, 5};
    std::cout << "Median of " << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4] << " is " << median(v) << std::endl;

    v = {-10, 4, 6, 1000, 10, 20};
    std::cout << "Median of " << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4] << ", " << v[5] << " is " << median(v) << std::endl;

    return 0;
}
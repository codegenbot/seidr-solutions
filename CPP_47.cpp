#include <iostream>
#include <vector>
#include <algorithm>

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2;
    } else {
        return l[n / 2];
    }
}

int main() {
    vector<float> l1 = {3, 1, 2, 4, 5};
    vector<float> l2 = {-10, 4, 6, 1000, 10, 20};

    std::cout << median(l1) << std::endl;
    std::cout << median(l2) << std::endl;

    return 0;
}
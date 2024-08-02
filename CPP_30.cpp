```
#include <vector>
#include <iostream>

int main() {
    std::vector<float> l;
    float x;
    while (std::cin >> x) {
        if (x > 0) {
            l.push_back(x);
        }
    }
    std::vector<float> result = get_positive(l);
    for (float i : result) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}
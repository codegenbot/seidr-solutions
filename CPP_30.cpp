```
#include <vector>
#include <iostream>

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

bool checkSame(vector<float> l, float num) {
    vector<float> result = get_positive(l);
    for (float n : result) {
        if (std::abs(n - num) <= 1e-6) {
            return isSame(result, {num});
        }
    }
    return false;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    vector<float> l;
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        l.push_back(num);
    }

    float num2;
    std::cout << "Enter the number to check: ";
    std::cin >> num2;

    if (checkSame(l, num2)) {
        std::cout << "The vectors are same." << std::endl;
    } else {
        std::cout << "The vectors are not same." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

int basementIndex(std::vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // Return -1 if no such index is found
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    std::cout << basementIndex(vec) << std::endl;
    return 0;
}
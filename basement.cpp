#include <vector>
#include <iostream>

int basement(std::vector<int> &v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> v;
    int n, num;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        v.push_back(num);
    }
    std::cout << basement(v) << std::endl;
    return 0;
}
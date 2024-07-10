#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> common() {
    int n;
    std::vector<int> v;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element: ";
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    return v;
}

int main() {
    auto v1 = common();
    int m;
    std::vector<int> v2;
    std::cout << "Enter number of elements (second vector): ";
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cout << "Enter element: ";
        int x;
        std::cin >> x;
        v2.push_back(x);
    }
    assert(issame(v1, v2));  
}
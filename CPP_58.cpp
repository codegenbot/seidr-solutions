```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> s1;
    std::vector<int> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    for(int i = 0; i < n1; i++) {
        int x;
        std::cin >> x;
        s1.push_back(x);
    }

    for(int i = 0; i < m1; i++) {
        int y;
        std::cin >> y;
        s2.push_back(y);
    }

    std::vector<int> diff(s1.size() + s2.size());
    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::back_inserter(diff));

    auto intersection = s1;
    s1.clear();
    std::vector<int> intersect(s1.size() + s2.size());
    std::set_intersection(s2.begin(), s2.end(), intersection.begin(), intersection.end(),
        std::back_inserter(intersect));

    std::cout << "Difference: ";
    for (int i : diff) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (int i : intersect) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
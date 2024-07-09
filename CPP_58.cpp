```cpp
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    std::set<std::string> s1;
    std::set<std::string> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    for(int i = 0; i < n1; i++) {
        std::string x;
        std::cin >> x;
        s1.insert(x);  
    }

    for(int i = 0; i < m1; i++) {
        std::string y;
        std::cin >> y;
        s2.insert(y);  
    }

    std::set<std::string> diff(s1.begin(), s1.end());
    auto res = std::inclusive_sort(diff);
    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                        res);

    auto intersection = s1;
    s1.clear();
    auto intersectRes = std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                           res);
    
    std::cout << "Difference: ";
    for (const auto& i : diff) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (const auto& i : intersectRes) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
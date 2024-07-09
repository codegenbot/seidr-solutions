```cpp
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    std::set<std::string> s1;
    std::set<std::string> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    std::vector<std::string> s1Vec;
    for(int i = 0; i < n1; i++) {
        std::string x;
        std::cin >> x;
        s1Vec.push_back(x);
    }

    std::vector<std::string> s1Copy(s1Vec);
    s1 = s1Copy;

    std::vector<std::string> s2Vec;
    for(int i = 0; i < m1; i++) {
        std::string y;
        std::cin >> y;
        s2Vec.push_back(y);
    }

    std::vector<std::string> s2Copy(s2Vec);
    s2 = s2Copy;

    std::vector<std::string> diff(s1.begin(), s1.end());
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                    std::back_inserter(diff));

    auto intersection = s1;
    s1.clear();
    std::vector<std::string> intersect(s2.begin(), s2.end());
    set_intersection(intersection.begin(), intersection.end(), s2.begin(), s2.end(),
                     std::back_inserter(intersect));

    std::cout << "Difference: ";
    for (const auto& i : diff) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (const auto& i : intersect) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
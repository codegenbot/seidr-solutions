```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::set<int> s1;
    std::set<int> s2;
    // Read input from user
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    for(int i = 0; i < n1; i++) {
        int x;
        std::cin >> x;
        s1.insert(x);
    }

    for(int i = 0; i < m1; i++) {
        int y;
        std::cin >> y;
        s2.insert(y);
    }

    // Calculate the difference between two sets
    std::vector<int> diff(s1.size() + s2.size());
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::back_inserter(diff));

    // Calculate the intersection of two sets
    auto intersection = s1;
    s1.clear();
    std::vector<int> intersect(s1.size() + s2.size());
    std::set_intersection(s2.begin(), s2.end(), intersection.begin(), intersection.end(),
        std::back_inserter(intersect));

    // Print the results
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
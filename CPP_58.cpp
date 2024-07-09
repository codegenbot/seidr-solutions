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
    std::set<int> common(s1.begin(), s1.end());
    set_difference(common.begin(), common.end(), s2.begin(), s2.end(),
                    inserter(s1, s1.begin()));

    return 0;
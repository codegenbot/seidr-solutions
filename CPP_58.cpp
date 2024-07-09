#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

bool issame(const std::set<int>& a, const std::set<int>& b) {
    return a == b;
}

void solveProblem() {
    std::set<int> s1;
    std::set<int> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    for(int i = 0; i < n1; i++) {
        int x;
        std::cin >> x;
        s1.insert(x); 
    }

    for(int i = 0; i < m2; i++) {
        int y;
        std::cin >> y;
        s2.insert(y); 
    }

    std::set<int> diff;
    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                        std::inserter(diff, diff.end()));

    auto intersection = s1;
    intersection.clear();
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                           std::inserter(intersection, intersection.end()));

    std::cout << "Difference: ";
    for (const auto& i : diff) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (const auto& i : intersection) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    if(issame(s1, s2)) {
        std::cout << "Sets are same.\n";
    } else {
        std::cout << "Sets are not same.\n";
    }

    return;
}

int main() {
    solveProblem();
    return 0;
}
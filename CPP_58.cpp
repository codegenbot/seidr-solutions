#include <iostream>
#include <vector>
#include <algorithm>

bool sameSets(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

void solveProblem() {
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    std::vector<int> s1(n1);
    for(int i = 0; i < n1; i++) {
        int x;
        std::cin >> x;
        s1[i] = x; 
    }

    std::vector<int> s2(m2);
    for(int i = 0; i < m2; i++) {
        int y;
        std::cin >> y;
        s2[i] = y; 
    }

    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    std::vector<int> diff;
    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                        std::back_inserter(diff));

    auto intersection = s1;
    intersection.erase(std::unique(intersection.begin(), intersection.end()), intersection.end());
    intersection.sort();

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

    if(sameSets(s1, s2)) {
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
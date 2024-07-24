#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int n1, m1, n2, m2;
    std::cout << "Enter the size of vectors (n1 and m1 for first vector, n2 and m2 for second): ";
    std::cin >> n1 >> m1 >> n2 >> m2;

    std::vector<int> l1(n1);
    std::vector<int> l2(n2);

    std::cout << "Enter elements of the first vector: ";
    for (int i = 0; i < n1; ++i) {
        std::cin >> l1[i];
    }

    std::cout << "Enter elements of the second vector: ";
    for (int i = 0; i < n2; ++i) {
        std::cin >> l2[i];
    }

    if (issame(l1, l2)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::vector<int> common_elements = common(l1, l2);
        if (common_elements.empty())
            std::cout << "Vectors have no common elements." << std::endl;
        else
            std::cout << "Common elements: ";
        for (int i : common_elements) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

    }

    return 0;
}
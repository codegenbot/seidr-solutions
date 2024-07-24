#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n1, n2;
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;
    std::vector<int> vec1(n1);
    for (int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> vec1[i];
    }
    
    int m1, m2;
    std::cout << "Enter the size of second vector: ";
    std::cin >> m1;
    std::vector<int> vec2(m1);
    for (int j = 0; j < m1; ++j) {
        std::cout << "Enter element " << j + 1 << ": ";
        std::cin >> vec2[j];
    }
    
    std::vector<int> result = common(vec1, vec2);

    std::cout << "Common elements: ";
    for (int i : result)
        std::cout << i << " ";
    std::cout << "\n";

    return 0;
}
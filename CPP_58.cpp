```
#include <iostream>
#include <vector>
#include <set>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
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
    int n, m;
    std::cout << "Enter number of elements for first list: ";
    std::cin >> n;
    
    std::vector<int> l1(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> l1[i];
    }
    
    std::cout << "Enter number of elements for second list: ";
    std::cin >> m;
    
    std::vector<int> l2(m);
    for (int i = 0; i < m; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> l2[i];
    }
    
    std::vector<int> res = common(l1, l2);
    
    std::cout << "Common elements: ";
    for (int x : res)
        std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}
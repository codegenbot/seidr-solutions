```cpp
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;

}

int main() {
    int n1,n2;
    std::cout << "Enter the size of the first array: ";
    std::cin >> n1;
    std::vector<int> l1(n1);
    for(int i=0; i<n1; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> l1[i];
    }
    
    int m1,m2;
    std::cout << "Enter the size of the second array: ";
    std::cin >> m1;
    std::vector<int> l2(m1);
    for(int j=0; j<m1; j++) {
        std::cout << "Enter element " << j+1 << ": ";
        std::cin >> l2[j];
    }
    
    std::vector<int> common_elements = common(l1, l2);

    std::cout << "Common elements: ";
    for(int i=0; i<common_elements.size(); i++) {
        std::cout << common_elements[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
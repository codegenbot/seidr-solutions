#include <iostream>
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());
    std::set<int> intersection;
    
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    
    std::vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n1, n2; // Input size of first list
    std::cout << "Enter the number of elements in the first list: ";
    std::cin >> n1;
    
    std::vector<int> l1(n1);
    for(int i = 0; i < n1; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> l1[i];
    }
    
    int m2; // Input size of second list
    std::cout << "\nEnter the number of elements in the second list: ";
    std::cin >> m2;
    
    std::vector<int> l2(m2);
    for(int i = 0; i < m2; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> l2[i];
    }
    
    std::vector<int> commonElements = common(l1, l2);
    if(commonElements.empty()) {
        std::cout << "\nNo common elements found.\n";
    } else {
        std::cout << "Common elements: ";
        for(int i = 0; i < commonElements.size(); ++i) {
            std::cout << commonElements[i] << " ";
        }
        std::cout << '\n';
    }
    
    return 0;
}
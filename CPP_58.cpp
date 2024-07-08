#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

bool issame(int x1, int y1, int x2, int y2) {
    if ((x1 == x2 && y1 == y2) || (x1 + y1 == x2 + y2))
        return true;
    return false;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::inserter(intersection, intersection.begin()));

    return std::vector<int>(intersection.begin(), intersection.end());
}

int main() {
    int x1, y1, x2, y2;

    std::cout << "Enter first coordinates (x, y): ";
    std::cin >> x1 >> y1;
    
    std::cout << "Enter second coordinates (x, y): ";
    std::cin >> x2 >> y2;

    if (issame(x1, y1, x2, y2))
        std::cout << "The two points are the same." << std::endl;
    else {
        std::vector<int> l1 = {x1, y1};
        std::vector<int> l2 = {x2, y2};

        std::vector<int> common_elements = common(l1, l2);
        
        if (common_elements.empty())
            std::cout << "The two points do not intersect." << std::endl;
        else
            std::cout << "The common elements are: ";
            
        for (int element : common_elements)
            std::cout << element << " ";
        std::cout << std::endl;
    }

    return 0;
}
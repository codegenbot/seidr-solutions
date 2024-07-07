#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> set1(l1.begin(), l1.end());
    std::set<int> set2(l2.begin(), l2.end());
    std::vector<int> intersection;
    intersection.insert(intersection.end(), std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::back_inserter(intersection)));
    return intersection;
}

int main() {
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};
    
    if(l1.size() > l2.size()) {
        for(int i : l1) {
            if(std::find(l2.begin(), l2.end(), i) == l2.end())
                break;
        }
    } else {
        for(int i : l2) {
            if(std::find(l1.begin(), l1.end(), i) == l1.end())
                break;
        }
    }
    
    std::cout << "All elements of one list are present in another." << std::endl;
    return 0;
}
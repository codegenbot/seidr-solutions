```cpp
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    std::set<std::string> s1;
    std::set<std::string> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    std::vector<std::string> s1Vec;
    for(int i = 0; i < n1; i++) {
        std::string x;
        std::cin >> x;
        s1Vec.push_back(x); 
    }

    for(auto &i : s1Vec) {
        if(s1.insert(i).second)  
            continue; 
    }

    std::vector<std::string> s2Vec;
    s2Vec.resize(m1);
    for(int i = 0; i < m1; i++) {
        std::string y;
        std::cin >> y;
        s2Vec[i] = y; 
    }

    for(auto &i : s2Vec) {
        if(s2.insert(i).second)  
            continue; 
    }

    std::vector<std::string> diff(s1.begin(), s1.end());
    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                        std::back_inserter(diff));

    auto intersection = s1;
    s1.clear();
    std::vector<std::string> intersect;
    std::set_intersection(intersection.begin(), intersection.end(), s2.begin(), s2.end(),
                           std::back_inserter(intersect));

    std::cout << "Difference: ";
    for (const auto& i : diff) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (const auto& i : intersect) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
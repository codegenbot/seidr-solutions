#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

std::pair<std::set<std::string>, std::set<std::string>> findSets() {
    std::set<std::string> s1;
    std::set<std::string> s2;
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;

    std::vector<std::string> s1Vec(m1);
    for(int i = 0; i < n1; i++) {
        std::string x;
        std::cin >> x;
        s1Vec.push_back(x); 
    }

    for(auto &i : s1Vec) {
        if(s1.insert(i).second)  
            continue; 
    }

    std::vector<std::string> s2Vec(m2);
    for(int i = 0; i < m2; i++) {
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
    intersection.clear();
    std::vector<std::string> intersect;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                           std::back_inserter(intersect));

    return {std::move(s1), std::move(s2)};
}

int main() {
    auto [s1, s2] = findSets();
    
    std::cout << "Difference: ";
    for (const auto& i : s1) {
        if (s2.find(i) == s2.end()) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
    std::cout << "Intersection: ";
    for (const auto& i : s1) {
        if (s2.find(i) != s2.end()) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
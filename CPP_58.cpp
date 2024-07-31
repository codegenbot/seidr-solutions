#include <iostream>
#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n; 
    std::cin >> n;
    std::cin.ignore();
    
    std::vector<std::vector<int>> v(n);

    for(int i=0; i<n; i++) {
        int m; 
        std::cin >> m;

        v[i].resize(m, 0); 

        for(int j=0; j<m; j++) {
            std::cin >> v[i][j];
        }
    }

    if(v.size() > 1) {
        bool same = true;
        for(int i=2; i<v.size(); i++) {
            same &= (v[0] == v[i]);
        }

        if(same) {
            std::vector<int> common;

            for(int i=0; i<v[0].size(); i++) {
                auto it = std::unique_copy(std::set_intersection(v[0].begin(), v[0].end(),
                                                                  v[1].begin(), v[1].end(),
                                                                  v[2].begin(), v[2].end()),
                                            v[0].begin());
                if(it != v[0].end()) {
                    common.push_back(*it);
                }
            }

            std::cout << "Common elements: ";
            for(int i=0; i<common.size(); i++) {
                std::cout << common[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "No common elements." << std::endl;
        }
    } 
    else { 
        std::cout << "At least two lists required to find common elements." << std::endl; 
    } 

    return 0;
}
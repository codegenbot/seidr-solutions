#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n; std::cin >> n;

    std::vector<std::vector<int>> v(n);

    for(int i=0; i<n; i++) {
        int m; std::cin >> m;

        v[i].resize(m);

        for(int j=0; j<m; j++) {
            std::cin >> v[i][j];
        }
    }

    if(v.size() > 1) {
        bool same = true;
        for(int i=2; i<v.size(); i++) {
            same &= issame(v[0], v[i]);
        }

        if(same) {
            std::vector<int> common;

            for(int i=0; i<v[0].size(); i++) {
                bool found = true;
                int count = 0;

                for(int j=1; j<v.size(); j++) {
                    if(std::find(v[j].begin(), v[j].end(), v[0][i]) == v[j].end()) {
                        found = false;
                        break;
                    }
                    else{
                        count++;
                    }
                }

                if(found && count == v.size() - 1) {
                    common.push_back(v[0][i]);
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
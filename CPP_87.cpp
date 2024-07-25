#include <iostream>
#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> vec1{{1,2},{3,4}};
    std::vector<std::vector<int>> vec2={{1,2},{3,4}};

    if(issame(vec1,vec2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are different." << std::endl;
    }

    return 0;
}
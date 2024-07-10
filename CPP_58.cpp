```cpp
#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        int val1 = a[(i+3)%4];
        int val2 = a[(i+1)%4];
        for(int j=0; j<4; j++){
            if(val1 == b[j] && val2==b[(j+1)%4]){
                result.push_back(a[i]);
                break;
            }
        }
    }
    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> l1(n), l2(m);

    for (int i = 0; i < n; i++) {
        l1[i].resize(4);
        for (int j = 0; j < 4; j++) {
            std::cin >> l1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        l2[i].resize(4);
        for (int j = 0; j < 4; j++) {
            std::cin >> l2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        std::vector<int> result = common({l1[i][0], l1[i][1], l1[i][2], l1[i][3]},
                                          {l2[0][0], l2[0][1], l2[0][2], l2[0][3]});
        for (int j : result) {
            std::cout << j;
            if (j < result.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
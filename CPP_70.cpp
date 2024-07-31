#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v1, v2;

    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v1.push_back(x);
    }

    for(int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v2.push_back(x);
    }

    bool same = issame(v1, v2);

    if(same) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

bool will_it_fly(std::vector<std::vector<int>> q, int w) {
    for (int i = 0; i < q.size() - 1; i++) {
        if(w < (q[i][1] - q[i][0]) || w < (q[i+1][1] - q[i+1][0])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> q = {{1, 2}, {3, 4}};
    int w = 6;
    if (!will_it_fly(q, w)) {
        std::cout << "Will not fly.\n";
    } else {
        std::cout << "Will fly.\n";
    }
    return 0;
}
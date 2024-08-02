#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    vec = incr_list(vec);
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
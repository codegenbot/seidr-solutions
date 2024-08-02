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
    std::vector<int> input = {1, 2, 3, 4};
    std::vector<int> result = incr_list(input);

    for(int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& v) {
    return v;
}

int main() {
    std::vector<int> v = {1, 2, 3};
    std::cout << "Original vector: ";
    for (auto& x : v) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    std::vector<int> incr_v = incr_list(v);
    std::cout << "Incremented vector: ";
    for (auto& x : incr_v) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    if (issame(v, incr_v)) {
        std::cout << "The two vectors are the same\n";
    } else {
        std::cout << "The two vectors are not the same\n";
    }

    return 0;
}
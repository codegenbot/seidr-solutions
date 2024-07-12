#include <iostream>
#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

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

int main() {
    std::vector<int> v = {1, 2, 3};
    std::vector<int> v_incr = incr_list(v);
    std::vector<int> v_copy = {2, 3, 4};

    if (issame(v_incr, v_copy)) {
        std::cout << "v_incr is the same as v_copy." << std::endl;
    } else {
        std::cout << "v_incr is different from v_copy." << std::endl;
    }

    return 0;
}
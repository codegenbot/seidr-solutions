#include <vector>

std::vector<int> incrementElements(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}
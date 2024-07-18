#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> l);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> incr_list(std::vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> l1 = {1, 2, 3};
    std::vector<int> l2 = incr_list(l1);

    assert(issame(l1, l2));

    return 0;
}
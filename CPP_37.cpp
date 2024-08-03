#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }
    std::sort(even_elements.begin(), even_elements.end());

    std::vector<float> l_prime = l;
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_elements[even_index];
            even_index++;
        }
    }
    l = l_prime;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(v);
    assert (issame(v, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}
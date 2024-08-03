#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
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

void sort_even(std::vector<float>& l);

int main() {
    std::vector<float> test = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> sorted_test = { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    std::vector<float> result = test;
    sort_even(result);
    assert(issame(result, sorted_test));

    return 0;
}
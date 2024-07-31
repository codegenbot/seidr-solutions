#include <iostream>
#include <vector>
#include <algorithm>

void sort_even(std::vector<float>& l);

bool issame(std::vector<float> a, std::vector<float> b) {
    sort_even(a);
    sort_even(b);
    return a == b;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_elems;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        }
    }
    std::sort(even_elems.begin(), even_elems.end());

    std::vector<float> result;
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_elems[j]);
            j++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    l = result;
}

int main() {
    assert(issame(std::vector<float>{5, 8, -12, 4, 23, 2, 3, 11, 12, -10}, std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

void sort_even(std::vector<float>& l);

bool issame(std::vector<float> a, std::vector<float> b);

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

bool issame(std::vector<float> a, std::vector<float> b) {
    sort_even(a);
    sort_even(b);
    return a == b;
}
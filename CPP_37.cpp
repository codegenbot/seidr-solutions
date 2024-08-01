#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<int>& l) {
    std::vector<int> even_values;
    std::vector<int> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    std::sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    std::vector<int> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(l);
    
    assert(std::equal(l.begin(), l.end(), std::vector<int>{-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}.begin()));
    
    return 0;
}
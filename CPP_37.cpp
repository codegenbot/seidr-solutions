#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // even indices, sort the elements
            auto it = std::max_element(l.begin() + i, l.end());
            l_prime.push_back(*it);
        } else {
            // odd indices, keep the original values
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}
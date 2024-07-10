#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evens(l.begin() + i, l.begin() + i + 1);
            sort(evens.begin(), evens.end());
            l_prime.push_back(evens[0]);
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}
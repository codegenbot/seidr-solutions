#include <vector>

void sort_third(vector<int>& l);

bool issame(int i, int j){
    return i == j;
}

void sort_third(vector<int>& l) {
    vector<int> l_prime = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(l_prime.begin() + i, l_prime.begin() + i + 3);
        }
    }
}
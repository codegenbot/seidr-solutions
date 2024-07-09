#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
}

vector<int> sort_third(vector<int> l);

int main() {
    return 0;
}

vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            sort(l_prime.begin() + i - 2, l_prime.begin() + i + 1);
        }
    }
    return l_prime;
}
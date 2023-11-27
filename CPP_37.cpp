#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool areEqual(const vector<float> a, const vector<float> b);

vector<float> sort_even(const vector<float>& l);

bool areEqual(const vector<float> a, const vector<float> b) {
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

vector<float> sort_even(const vector<float>& l) {
    vector<float> l_prime = l;
    vector<float> even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_values[i / 2];
        }
    }
    
    return l_prime;
}

int main() {
    vector<float> l = {3.2, 1.5, 4.7, 2.9, 6.1};
    vector<float> sorted_l = sort_even(l);
    
    vector<float> expected = {1.5, 3.2, 2.9, 4.7, 6.1};
    
    if (areEqual(sorted_l, expected)) {
        cout << "The list is sorted correctly." << endl;
    } else {
        cout << "The list is not sorted correctly." << endl;
    }
    
    return 0;
}
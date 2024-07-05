#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    sort(even_elements.begin(), even_elements.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i += 2) {
        l[i] = even_elements[even_index++];
    }
    return l;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), 
                  {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
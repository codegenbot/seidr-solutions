#include <vector>
#include <assert.h>

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> l = {1, 2, 3};
    vector<int> l_inc = incr_list(l);
    vector<int> l_copy = {2, 3, 4};
  
    assert(issame(l_inc, l_copy));

    return 0;
}

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
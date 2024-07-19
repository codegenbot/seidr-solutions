#include <vector>
#include <cassert>

vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> list = {1, 2, 3, 4, 5};
    vector<int> new_list = incr_list(list);
    
    assert(!issame(list, new_list));

    return 0;
}
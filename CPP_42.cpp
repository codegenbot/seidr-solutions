#include<vector>
#include<assert.h>

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = incr_list(l1);
    
    assert(issame(l1, l2));
    
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
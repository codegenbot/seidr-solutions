#include<vector>

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = incr_list(l1);
    
    assert(issame(l1, l2) && l1 == vector<int>{2, 3, 4});
    
    return 0;
}
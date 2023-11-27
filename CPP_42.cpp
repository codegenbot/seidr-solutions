#include <vector>

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> a {1, 2, 3};
    vector<int> b {4, 5, 6};
    
    vector<int> result = incr_list(a);
    
    assert(issame(result, b));
    
    return 0;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i] + 1);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
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
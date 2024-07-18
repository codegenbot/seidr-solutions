#include <vector>

bool is_same(const vector<int> &a, const vector<int> &b){
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

int main(){
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    assert(is_same(a, b));

    return 0;
}
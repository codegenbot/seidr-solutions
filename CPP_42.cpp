#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> incr_list(const vector<int>& l){
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l[i]+1;
    }
    return result;
}

int main_function() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) , {6, 3, 6,3, 4, 4, 10, 1, 124}));
    return 0;
}
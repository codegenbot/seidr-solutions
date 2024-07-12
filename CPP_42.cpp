#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool same(const vector<int>& v1, const vector<int>& v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
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

int main() {
    assert(same({6, 3, 6,3, 4, 4, 10, 1, 124}, incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123})));
    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> incr_list(const vector<int>& l){
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l[i]+1;
    }
    return result;
}

int main() {
    assert(issame({7, 3, 7,3, 5, 5, 11, 1, 125}, incr_list({6, 2, 6, 2, 4, 4, 10, 0, 124})));
    return 0;
}
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
    assert(issame({7, 4, 7,3, 5, 5, 11, 2, 125}, {6, 3, 6,3, 4, 4, 10, 1, 124}));
    return 0;
}
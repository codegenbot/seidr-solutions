#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool isSame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> incrList(const vector<int>& l){
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l[i]+1;
    }
    return result;
}

int main() {
    assert(isSame({6, 3, 6,3, 4, 4, 10, 1, 124}, incrList({5, 2, 5, 2, 3, 3, 9, 0, 123})));
    return 0;
}
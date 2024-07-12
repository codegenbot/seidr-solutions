#include <vector>
#include <algorithm>

using namespace std;

vector<int> incr_list(const vector<int>& l){
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l[i]+1;
    }
    return result;
}

int main() {
    assert(issame({6, 3, 6,3, 4, 4, 10, 1, 124}, incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123})));
    return 0;
}
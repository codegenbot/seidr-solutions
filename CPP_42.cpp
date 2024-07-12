#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(initializer_list<int> l){
    vector<int> result = vector<int>(l);
    for(int i : result) {
        i++;
    }
    return result;
}

int main() {
    assert(issame(vector<int>(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123})) , {6, 3, 6,3, 4, 4, 10, 1, 124}));
    return 0;
}
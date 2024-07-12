```cpp
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i: l) {
        result.push_back(i+1);
    }
    return result;
}

int main() {
    vector<int> l; 
    l.push_back(5); l.push_back(2); l.push_back(5); l.push_back(2); l.push_back(3); l.push_back(3); l.push_back(9); l.push_back(0); l.push_back(123);
    assert(issame(incr_list(l), {6, 3, 6,3, 4, 4, 10, 1, 124}));
    return 0;
}
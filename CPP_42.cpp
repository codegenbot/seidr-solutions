```cpp
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> incr_list(const initializer_list<int>& l) {
    vector<int> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        result[i] = l.begin()[i]+1;
    }
    return result;
}

int main() {
    assert(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) == vector<int>({6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
#include <vector>
#include <cassert>

int add(const vector<int>& lst) {
    assert(!lst.empty());
    
    int sum = 0;
    for (size_t i = 0; i < lst.size(); i += 2) {
        if (i < lst.size() && lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}
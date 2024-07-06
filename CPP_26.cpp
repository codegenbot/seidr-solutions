```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers = {1,2,3,4,5};
    vector<int> expected = {1,2,3,4,5};

    //assert(issame(remove_duplicates(numbers),expected));
    return 0;
}
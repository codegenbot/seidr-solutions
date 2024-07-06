#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) 
        return false;
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) 
            return false;
    }
    
    return true;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
}
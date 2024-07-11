#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> pluck(vector<int> v) {
    return v;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> arr = {{7}, {9}, {7}, {1}};
    
    bool result = issame(pluck({7, 9, 7, 1}), {});
    assert(result);
    
    return 0;
}
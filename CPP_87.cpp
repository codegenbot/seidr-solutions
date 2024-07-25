#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j<a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_row({}, 1) , {}));
    return 0;
}
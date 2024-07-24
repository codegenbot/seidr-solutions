```cpp
#include <vector>
using namespace std;

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j < a[i].size(); j++) {
            if(find(a[i].begin(), a[i].end(), b[i][j]) == a[i].end()) return false;
        }
    }
    return true;
}

int main() {
    assert (issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {"run"}}, {{{"grunt"}, {"prune"}}}));
}
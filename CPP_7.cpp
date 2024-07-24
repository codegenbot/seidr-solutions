#include <vector>
using namespace std;

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i].size() != b[i].size()) return false;
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert (issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {"run"}}, {{{"grunt"}, {"prune"}}}));
}
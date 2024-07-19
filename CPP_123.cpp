```cpp
#include <vector>
#include <assert.h>

using namespace std;

vector<pair<int, int>> get_collatz(int n) {
    vector<pair<int, int>> result;
    while(n!=1){
        if(n%2==0)n=n/2;
        else n=3*n+1;
        result.push_back({n, 1});
    }
    return result;
}

bool same(vector<pair<int, int>> a, vector<pair<int, int>> b) {
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i].first!=b[i].first || a[i].second!=b[i].second)return false;
    }
    return true;

}

int main() {
    assert(same(get_collatz(1), {{1, 1}}));
}
```cpp
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    pair<vector<int>, vector<int>> (a,b);
    vector<int> c(a.begin(), a.end());
    c.insert(c.end(),b.begin(),b.end());
    sort(c.begin(),c.end());
    for(int i=0; i<c.size()-1; i++){
        if(c[i]==c[i+1]){
            return make_pair(i,c[i]);
        }
    }
    return make_pair(-1,-1);
}

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}

int main() {
    assert(compare({1,2,3,5}, {-1,2,3,4}) == make_pair(0,2));
    return 0;
}
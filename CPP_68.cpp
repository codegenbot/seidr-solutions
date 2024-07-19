#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> pluck(vector<int> v){
    return v;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
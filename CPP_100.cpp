#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> make_a_pile(int n){
    vector<int> result;
    for(int i=0; i<n; ++i){
        result.push_back(n + 2*i);
    }
    return result;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
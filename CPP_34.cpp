#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
  // actual implementation of issame function
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    // rest of the main function
    return 0;
}
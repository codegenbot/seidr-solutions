#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){

}

vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    assert(issame(removeDuplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    
    return 0;
}
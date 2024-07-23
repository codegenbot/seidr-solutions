#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sort_third(vector<int> l){
    vector<int> res = l;
    for (int i = 0; i < l.size(); i+=3){
        sort(res.begin() + i, min(res.begin() + i + 3, res.end()));
    }
    return res;
}

int main(){
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
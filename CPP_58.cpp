#include <algorithm>
#include <vector>
#include <set>
#include <iterator>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

vector<int> common(vector<int> l1, vector<int> l2){
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main(){
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}
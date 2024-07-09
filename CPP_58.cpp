#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

vector<int> common(vector<int> l1, vector<int> l2){
    return issame(l1, l2);
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {3, 4, 5, 6, 7};
    vector<int> result = common(l1, l2);
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
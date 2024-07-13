```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evens;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evens.emplace_back(arr[i], i);
        }
    }
    if (evens.empty()) return {};
    sort(evens.begin(), evens.end());
    return {evens[0].first, evens[0].second};
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}) , {}));
}
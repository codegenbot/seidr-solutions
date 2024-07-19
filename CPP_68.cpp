#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> pluck(vector<int> v){
    vector<int> result;
    for (int i = 0; i < v.size(); ++i) {
        if (find(result.begin(), result.end(), v[i]) == result.end()) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {1, 7, 9}));
    return 0;
}
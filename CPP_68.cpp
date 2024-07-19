#include <vector>
#include <algorithm>

using namespace std;

pair<bool, int> issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return make_pair(false, -1);
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i]) return make_pair(false, i);
    }
    return make_pair(true, 0);
}
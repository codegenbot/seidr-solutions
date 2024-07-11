#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if(count(a.begin(), a.end(), 1) > count(b.begin(), b.end(), -1)){
        return make_pair(1,0);
    } else if(count(b.begin(), b.end(), -1) > count(a.begin(), a.end(), 1)) {
        return make_pair(0,1);
    } else {
        return make_pair(0,0);
    }
}
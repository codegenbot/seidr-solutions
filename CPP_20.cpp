#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> arr, float target) {
    vector<pair<float, int>> idx_dist;
    
    for(int i = 0; i < arr.size(); ++i) {
        pair<float, int> p = make_pair(abs(arr[i] - target), i);
        idx_dist.push_back(p);
    }
    
    sort(idx_dist.begin(), idx_dist.end());
    
    return vector<float>(arr.begin() + idx_dist[0].second, arr.begin() + idx_dist[1].second + 1);
}

int main() {
    assert(issame({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}));
    return 0;
}
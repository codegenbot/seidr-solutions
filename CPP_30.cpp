#include <vector>
#include <algorithm>

bool same(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(same(get_positive({}), {}) == true);
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}
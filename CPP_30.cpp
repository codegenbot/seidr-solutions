```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<float>& l) {
    bool same = true;
    if (!l.empty()) {
        auto first = l[0];
        for (float num : l) {
            if (num != first)
                return false;
        }
        return true;
    }
    return false;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;

}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}
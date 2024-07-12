#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool is_same(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(is_same(get_positive({}), {}));
    return 0;
}
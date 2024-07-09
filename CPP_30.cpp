#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

vector<std::float_> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> v1 = { -1, 2, 3 };
    vector<float> v2 = get_positive(v1);
    assert(issame(get_positive({}), v2)); 
    return 0;
}
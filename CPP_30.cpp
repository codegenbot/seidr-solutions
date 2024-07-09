```cpp
#include <vector>
#include <algorithm>

bool isSame(vector<float> a, vector<float> b) {
    return (a == b);
}

int main() {
    assert(isSame(get_positive({}), {}));
    // ...
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}
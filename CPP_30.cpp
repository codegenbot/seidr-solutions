```cpp
#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool same(vector<float> a,vector<float>b){
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    vector<float> v1 = get_positive({-3.5, -2, 0, 2, 4.5});
    vector<float> v2 = get_positive({-3.5, -2, 0, 2, 4.5});
    if (!same(v1,v2)) {
        cout << "Vectors are not same." << endl;
    } else {
        cout << "Vectors are same." << endl;
    }
    return 0;
}
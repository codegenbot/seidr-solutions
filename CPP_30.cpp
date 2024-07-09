```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b);
std::vector<float> get_positive(std::vector<float> l);

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    std::vector<float> pos_nums = get_positive({-1, 0, 2, -3, 4});
    return 0;
}
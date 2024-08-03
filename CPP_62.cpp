#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::std::vector<float>& a, const std::std::vector<float>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::std::vector<float> derivative(const std::std::vector<float>& xs){
    std::std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}
```
```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    if(k > arr.size())
        k = arr.size();
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}
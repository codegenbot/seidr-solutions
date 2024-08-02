#include <vector>
#include <algorithm>

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result = l;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}
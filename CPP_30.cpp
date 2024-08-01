#include <vector>
#include <algorithm>

bool std::same(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) 
        return false;
    for (float x : a) {
        if (std::find(b.begin(), b.end(), x) == b.end())
            return false;
    }
    return true;
}
#include <vector>
#include <algorithm>

int* compare(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return nullptr;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i)
        if (a[i] < b[i])
            return new int{1};
        else if (a[i] > b[i])
            return new int{-1};
    return new int{0};
}
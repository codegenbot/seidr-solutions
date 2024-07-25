#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> maximumResult(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int findMaximum(int n, int num)
{
    int max=-10000;
    for (int i = 1; i <= n; ++i)
    {
        if (i > max && i < num)
            max=i;
    }
    return max;
}
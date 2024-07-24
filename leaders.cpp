#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    int n = vec.size();
    std::vector<int> result;

    // The rightmost element is always a leader.
    if (n > 0)
        result.push_back(vec.back());

    for (int i = n - 2; i >= 0; --i) {
        if (vec[i] >= vec.back())
            result.push_front(vec[i]);
    }

    return result;
}
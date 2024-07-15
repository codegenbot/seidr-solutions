#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;

}

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;

}
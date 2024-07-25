#include <iostream>
#include <vector>
#include <algorithm>

bool areSame(std::vector<int> vec1, std::vector<int> vec2) {
    if(vec1.size() != vec2.size()) return false;
    for(int i = 0; i < vec1.size(); i++) {
        if(vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> min_max;
    for (int num : lst) {
        if (num < *min_max.begin() || min_max.empty())
            min_max.push_back(num);
        else if (*min_max.rbegin() > num)
            min_max.push_back(num);
    }

    while (!lst.empty()) {
        result.push_back(*min_max.begin());
        lst.erase(std::remove(lst.begin(), lst.end(), *min_max.begin()), lst.end());
        min_max.clear();
        for (int num : lst) {
            if (num < *min_max.begin() || min_max.empty())
                min_max.push_back(num);
            else if (*min_max.rbegin() > num)
                min_max.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(std::equal(strange_sort_vector({1, 2, 3}).begin(), strange_sort_vector({1, 2, 3}).end(), {1, 2, 3}.begin()) && "The input vector should not have any duplicate values");
    return 0;
}
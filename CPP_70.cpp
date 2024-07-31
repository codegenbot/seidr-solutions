```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b) {
    if(strange_sort_vector(a).size() != strange_sort_vector(b).size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(strange_sort_vector(a)[i] != strange_sort_vector(b)[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        for (int i : lst) {
            if (i == min) {
                result.push_back(i);
                lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                break;
            }
        }

        if (!lst.empty())
            min = *min_element(lst.begin(), lst.end());

        while (!lst.empty() && *min_element(lst.begin(), lst.end()) == min) {
            for (int i : lst) {
                if (i == max) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }

            if (!lst.empty())
                max = *max_element(lst.begin(), lst.end());
        }
    }

    return result;
}
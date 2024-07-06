#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    for (int i = 0; i < lst.size(); i++) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());

        if (i % 2 == 0) {
            result.push_back(minVal);
            std::vector<int> temp;
            for (int j : lst) {
                if (j != minVal) {
                    temp.push_back(j);
                }
            }
            lst = temp;
        } else {
            result.push_back(maxVal);
            std::vector<int> temp;
            for (int j : lst) {
                if (j != maxVal) {
                    temp.push_back(j);
                }
            }
            lst = temp;
        }
    }

    return result;
}
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            std::vector<int> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                if (k % 3 == 0) {
                    result.push_back(temp[k]);
                }
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
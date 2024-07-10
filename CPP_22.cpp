#include <vector>
#include <list>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) {
            bool same = false;
            for (const auto& val : boost::any_cast<std::vector<int>>(value)) {
                if (!same) {
                    same = true;
                    result.push_back(val);
                } else if (!issame(result, std::vector<int>({val}))) {
                    break;
                }
            }
        }
    }
    return result;
}
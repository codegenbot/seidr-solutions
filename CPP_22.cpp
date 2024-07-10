#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<vector<int>> filter_vectors(list_any values) {
    vector<vector<int>> result;
    for (const auto& value : values) {
        if (boost::any_cast<vector<int>>(value).size() > 0) {
            bool same = true;
            for (const auto& vec : result) {
                if (!issame(vec, boost::any_cast<vector<int>>(value))) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result.push_back(boost::any_cast<vector<int>>(value));
            }
        }
    }
    return result;
}
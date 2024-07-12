#include <vector>
#include <algorithm>
#include <cassert>

namespace ns {
    using std::vector;
}

ns::vector<int> pluck(ns::vector<int> v) {
    ns::vector<int> result;
    for (int i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}

bool issame(ns::vector<int> a, ns::vector<int> b) {
    return a == b;
}
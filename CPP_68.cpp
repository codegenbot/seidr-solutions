#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    return (v1.size() == v2.size()) && std::equal(v1.begin(), v1.end(), v2.begin());
}
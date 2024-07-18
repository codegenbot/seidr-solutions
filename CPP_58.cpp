#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int num : a) {
        if (find(b.begin(), b.end(), num) != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}

assert(issame(common({4, 3, 2, 8}, vector<int>{}), vector<int>{}));
return 0;
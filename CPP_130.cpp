#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int> &v1, initializer_list<int> v2) {
    return vector<int>(v2) == v1;
}

bool issameVec(const vector<int> &v1, const vector<int> &v2) {
    return v1 == v2;
}

vector<int> tri(int n) {
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n >= 1) {
            result.push_back(1);
            if (n >= 2) {
                result.push_back(1 + n / 2);
                for (int i = 3; i <= n; ++i) {
                    if (i % 2 == 0) {
                        result.push_back(1 + i / 2);
                    } else {
                        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
                    }
                }
            }
        }
    }
    return result;
}

```
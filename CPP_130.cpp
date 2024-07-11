#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

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
                    }
                    else {
                        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    assert(equal(tri(1).begin(), tri(1).end(), vector<int>{3, 1}.begin()));
    return 0;
}
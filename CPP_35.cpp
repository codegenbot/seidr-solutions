#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

float max_element(vector<int> l) {
    float max_val = static_cast<float>(l[0]);
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = static_cast<float>(l[i]);
        }
    }
    return max_val;
}
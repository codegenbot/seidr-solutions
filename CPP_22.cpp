#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            int val = any_cast<int>(value);
            bool added = false;
            for (int num : result) {
                if (issame({num}, {val})) {
                    added = true;
                    break;
                }
            }
            if (!added)
                result.push_back(val);
        }
    }
    return result;
}
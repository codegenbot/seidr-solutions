#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            int val = any_cast<int>(value);
            bool found = false;
            for (int i = 0; !found && i < result.size(); i++) {
                if (issame({result[i]}, {val})) {
                    found = true;
                }
            }
            if (!found)
                result.push_back(val);
        }
    }
    return result;
}
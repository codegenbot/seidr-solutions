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
            for (int num : result) {
                if (issame({num}, {val})) {
                    found = true;
                    break;
                }
            }
            if (!found)
                result.push_back(val);
        }
    }
    return result;
}
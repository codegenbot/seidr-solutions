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
    unordered_map<int, int> map;
    for (const auto& value : values) {
        if (any_cast<int>(value).is_of_type<type_index::int_>()) {
            int val = any_cast<int>(value);
            if (map.count(val)) {
                bool same = false;
                for (int num : result) {
                    if (issame({num}, {val})) {
                        same = true;
                        break;
                    }
                }
                if (!same)
                    continue;
            } else {
                map[val]++;
                result.push_back(val);
            }
        }
    }
    return result;
}
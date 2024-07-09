#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&b](int x) {return find(b.begin(), b.end(), x) != b.end();});
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int val = any_cast<int>(value);
            bool same = false;
            for (int num : result) {
                if (issame({num}, {val})) {
                    same = true;
                    break;
                }
            }
            if (!same)
                result.push_back(val);
        }
    }
    return result;
}
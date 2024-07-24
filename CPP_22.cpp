#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (any_cast<int>(value)) {
            int num = any_cast<int>(value);
            bool is_in_result = false;
            for (int i = 0; i < result.size(); i++) {
                if (issame({num}, {result[i]})) {
                    is_in_result = true;
                    break;
                }
            }
            if (!is_in_result) {
                result.push_back(num);
            }
        }
    }
    return result;
}
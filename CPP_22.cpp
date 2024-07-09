```cpp
#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(vector<int> a,vector<int>b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&b](int x) {return find(b.begin(), b.end(), x) != b.end();});
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<optional<int>>(value).has_value()) {
            result.push_back(any_cast<optional<int>>(value).value());
        }
    }
    return result;
}
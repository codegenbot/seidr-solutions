#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
using namespace boost;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            int num = any_cast<int>(value);
            bool same = false;
            for (int i : result) {
                if (issame(vector<int>({i}), vector<int>({num}))) {
                    same = true;
                    break;
                }
            }
            if (!same) {
                result.push_back(num);
            }
        }
    }
    return result;
}
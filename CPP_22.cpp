#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

bool allsame(const boost::any& value) {
    if (!value.good()) return false;
    vector<int> v = boost::any_cast<vector<int>>(value);
    return issame(v, vector<int>(1, v[0]));
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto value : values) {
        if (auto intValue = boost::any_cast<int>(&value)) {
            result.push_back(*intValue);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    assert(issame(a, b));

    vector<int> c = {4, 5, 6};
    vector<int> d = {4, 5};
    assert(!issame(c, d));

    vector<int> e = {7, 8, 9};
    vector<int> f = {7, 8, 9, 10};
    assert(!issame(e, f));

    vector<int> g = {};
    vector<int> h = {};
    assert(issame(g, h));

    return 0;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
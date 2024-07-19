#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>
using namespace std;

int issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(const list<boost::any>& values) {
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}
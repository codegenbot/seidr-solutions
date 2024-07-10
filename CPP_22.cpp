#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
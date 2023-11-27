#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Code for issame function
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
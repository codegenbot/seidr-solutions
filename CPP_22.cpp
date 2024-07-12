```c++
#include <boost/any.hpp>
#include <list>
#include <vector>

using namespace std;
using namespace boost;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).which() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}
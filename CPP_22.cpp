#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int) && 
            any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}
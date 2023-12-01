#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<boost::any> values);

int main() {
    list<boost::any> values;
    values.push_back(1);
    values.push_back("hello");
    values.push_back(2.5);
    values.push_back(3);
    values.push_back("world");

    vector<int> result = filter_integers(values);

    assert(result.size() == 2);
    assert(result[0] == 1);
    assert(result[1] == 3);

    return 0;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<boost::any> values);

int main() {
    list<boost::any> values;
    values.push_back(10);
    values.push_back(20);
    values.push_back("hello");
    values.push_back(30);
    values.push_back(40);
    values.push_back("world");

    vector<int> result = filter_integers(values);

    assert(result.size() == 4);
    assert(result[0] == 10);
    assert(result[1] == 20);
    assert(result[2] == 30);
    assert(result[3] == 40);

    return 0;
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
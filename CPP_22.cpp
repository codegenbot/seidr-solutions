#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    issame(filter_integers({ 3, 'c', 3, 3, 'a', 'b' }), { 3, 3, 3 });
    return 0;
}
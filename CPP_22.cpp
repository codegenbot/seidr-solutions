#include <vector>
#include <boost/any.hpp>
#include <list>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
}
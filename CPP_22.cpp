#include <boost/any.hpp>
#include <list>
#include <vector>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<boost::any> values);

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
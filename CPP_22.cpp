#include <vector>
#include <boost/any.hpp>
#include <list>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto value : values) {
        if (auto intValue = boost::any_cast<int>(&value)) {
            result.push_back(*intValue);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> expected = {3, 3, 3};
    vector<int> actual = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(actual, expected));
    return 0;
}
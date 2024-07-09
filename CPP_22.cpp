#include <boost/any.hpp>
#include <list>
#include <vector>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (auto ptr = boost::any_cast<int>(&val)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}
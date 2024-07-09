```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

boost::any list_any();

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : boost::any_cast<vector< boost::any >>(values)) {
        if (boost::any_cast<int>(value).type() == typeid(int) && 
            !boost::any_cast<int>(value).bad()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool areSame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), 
      [&](int i){return find(b.begin(), b.end(), i) != b.end();});
}

int main() {
    assert(areSame(filter_integers(list_any()), {3, 3, 3}) );
}
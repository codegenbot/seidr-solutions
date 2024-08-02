```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

boost::any_to_any_converter converter;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = boost::any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}
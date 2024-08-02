```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}
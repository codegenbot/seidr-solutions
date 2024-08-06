#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (auto int_val = boost::any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {1, 2, "abc", 3.5, 4, 5};
    std::vector<int> filtered_values = filter_integers(values);

    assert(issame(filtered_values, {1, 2, 4, 5}));

    return 0;
}
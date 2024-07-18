#include <boost/any.hpp>
#include <vector>

std::vector<int> filter_integers(std::vector<boost::any> values);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::vector<boost::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::vector<boost::any> values = {1, 2, "hello", 3.14, 5};
    std::vector<int> filtered_values = filter_integers(values);
    assert(issame(filtered_values, std::vector<int>{1, 2, 5}));
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}
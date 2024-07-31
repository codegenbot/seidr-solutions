#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values{1, 2, "hello", 3};
    auto filtered_values = filter_integers(values);

    std::vector<int> comparison_vec{1, 2, 3};
    if (issame(filtered_values, comparison_vec)) {
        // Handle case where filtered_values contains only integers
    }

    return 0;
}
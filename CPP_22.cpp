#include <vector>
#include <list>
#include <boost/any.hpp> // Remove this line

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) { // Check if the type is int
            result.push_back(boost::any_cast<int>(val)); // Cast and push
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {1, 2, "abc", 3.5, 4, 5}; // Using different data types
    std::vector<int> filtered_values = filter_integers(values);
    
    assert(issame(filtered_values, {1, 2, 4, 5}));

    return 0;
}
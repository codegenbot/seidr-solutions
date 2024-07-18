#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b){ // fix the function signature
    // Your implementation
}

std::vector<int> filter_integers(std::list<boost::any> values){ // declare the function

    std::vector<int> result;
    for (const auto &value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    std::vector<int> filtered_values = filter_integers({3, 'c', 3, 3, 'a', 'b'}); // use the function
    // Your assertion or validation code here
    // Call and test issame function as needed
    return 0;
}
#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(const std::list<boost::any>& values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b);

int main() {
    // Main function implementation
    return 0;
}
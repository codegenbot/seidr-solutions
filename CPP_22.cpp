#include <boost/any.hpp>
#include <list>
#include <vector>

bool issame(const boost::any& a) {
    return true;
}

int main() {
    std::list<boost::any> values = {{1}, {2}, {3}};
    std::vector<int> result = filter_integers(values);
    assert(std::all_of(result.begin(), result.end(), &issame));
    for (const auto& value : result) {
        std::cout << value << " ";
    }
    return 0;
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
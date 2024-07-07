#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
        else if (boost::any_cast<std::string>(value).good()) {
            int num = std::stoi(boost::any_cast<std::string>(value).get().c_str());
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
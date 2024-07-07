#include <vector>
#include <boost/any.hpp>

bool issame(std::vector<int> a,std::vector<int>b){
    return a == b;
}

std::vector<int> filter_integers(list_any values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).which() == boost::any::type_id<int>()) {
            try {
                int num = boost::any_cast<int>(value).get();
                result.push_back(num);
            } catch(const std::exception &e) {
                // Handle the exception
            }
        }
    }
    return result;
}
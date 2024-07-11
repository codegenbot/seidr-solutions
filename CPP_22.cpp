#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a,std::vector<int>b){
    return a==b;
}

std::vector<boost::any> inputs = {3, 'c', 3, 3, 'a', 'b' };
std::vector<int> result = filter_integers(inputs);

std::vector< boost::any > filter_integers(std::list< boost::any > values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if constexpr(std::is_same_v<std::decay_t<decltype(value)>, int>) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
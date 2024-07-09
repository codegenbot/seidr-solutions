#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<any> filter_integers(list<any> values){
    std::vector<any> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if(boost::any_cast<bool>(value) && boost::any_cast<int>(value).second == 0){
            result.push_back(value);
        }
    }
    return result;
}
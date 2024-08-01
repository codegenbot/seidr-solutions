#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            int num = boost::get<int>(value);
            bool same = true;
            for (int i : result) {
                if (!issame({i}, {num})) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result.push_back(num);
            }
        }
    }
    return result;
}
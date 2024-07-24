#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type()) {
            int casted = boost::any_cast<int>(value);
            bool same = true;
            for (int i : result) {
                if (!issame({i}, {casted})) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result.push_back(casted);
            }
        }
    }
    return result;
}
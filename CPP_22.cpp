#include <vector>
#include <list>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            bool contains = false;
            for (int n : result) {
                if (n == num) {
                    contains = true;
                    break;
                }
            }
            if (!contains) {
                result.push_back(num);
            }
        }
    }
    return result;
}
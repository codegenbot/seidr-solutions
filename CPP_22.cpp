#include <vector>
#include <list>
#include <string>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(bool)) {
            bool val = boost::get<bool>(value);
            if (val) {
                try {
                    int val2 = std::stoi(std::any_cast<std::string>(value).cast<std::string>());
                    result.push_back(val2);
                } catch (...) {}
            }
        }
    }
    return result;
}
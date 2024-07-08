#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<std::any> values) {
    bool result = true;

    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value)) continue;
        bool is_true = boost::any_cast<bool>(value);
        result &= is_true;
    }

    return result;
}

int main() {
    assert(issame({std::any(true), std::any(false)}));
    return 0;
}
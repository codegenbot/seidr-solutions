#include <vector>
#include <boost/any.hpp>
#include <boost/variant.hpp>

using namespace boost;

namespace {
    variant<int, string> to_variant(int i) { 
        return i; 
    }
}

std::vector<int> filter_integers(std::vector<variant<int, string>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}
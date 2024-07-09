#include <variant>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) { return a == b; }

std::vector<int> filter_integers(std::initializer_list<std::variant<int>> values) {
    std::vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = std::any_cast<int>(value);
            if(std::find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}
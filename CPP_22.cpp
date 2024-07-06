#include <optional>
#include <vector>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = boost::any_cast<std::optional<int>>(value);
            if( optionalInt.has_value()) {
                int i = optionalInt.get();
                result.push_back(i);
            }
        }
    }
    return result;
}

int main() {
    std::list<std::any> values = {{1}, {2}, {3}, {4}};
    auto output = filter_integers(values);
    // Use the output vector as needed
}
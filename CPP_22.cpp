```#include <optional>

#include <vector>
#include <list>
#include <type_traits>

using namespace std;

std::vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative(optional<int>, value)) {
            optional<int> optionalInt = get<optional<int>>(value);
            if (optionalInt.has_value()) {
                int i = optionalInt.get();
                result.push_back(i);
            }
        }
    }
    return result;
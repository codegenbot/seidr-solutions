#include <optional>
#include <vector>
#include <list>

#include <variant>

using namespace std;

vector<int> filter_integers(list<variant<string, int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int optionalInt = get<int>(value);
            result.push_back(optionalInt);
        }
    }
    return result;
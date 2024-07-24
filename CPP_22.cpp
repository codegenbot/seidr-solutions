#include <vector>
#include <list>
#include <any>

namespace std {
    template<>
    struct any_cast<std::any> {
        friend auto operator<<(ostream& os, const any_cast& a) -> ostream& {
            return os << "any";
        }
    };
}

using namespace std;

std::vector<int> filter_integers(std::list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<std::any>(value).type() == typeid(int)) {
            try {
                result.push_back(any_cast<std::any>(value).get<int>());
            } catch (bad_any_cast) {
                //handle bad any cast here
            }
        }
    }
    return result;
}
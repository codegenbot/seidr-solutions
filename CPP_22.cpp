#include <vector>
#include <list>
#include <variant>

using namespace std;

vector<int> filter_integers(list<variant<int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
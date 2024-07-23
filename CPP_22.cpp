#include <vector>
#include <list>

using namespace std;

enum class AnyType { INTEGER };

struct Any {
    AnyType type;
    int value;
};

vector<int> filter_integers(list<Any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type == AnyType::INTEGER) {
            result.push_back(value.value);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
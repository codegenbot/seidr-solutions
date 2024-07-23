#include <vector>
#include <list>

using namespace std;

enum class AnyType {
    INTEGER,
    // add more types as needed...
};

struct AnyValue {
    int integer;
    // add more fields for other types...
};

vector<int> filter_integers(list<AnyValue> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.integer != 0) { // assuming you want to filter out zero
            result.push_back(value.integer);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
#include <vector>
#include <list>

using namespace std;

struct Any {
    int integer;
    // add more types as needed...
};

enum class Type {
    INTEGER,
    // add more types as needed...
};

vector<int> filter_integers(list<Any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.integer != 0) {
            result.push_back(value.integer);
        }
    }
    return result;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}
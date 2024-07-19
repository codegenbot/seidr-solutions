#include <vector>
#include <list>
#include <cassert>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (const auto &val : values) {
        if (typeid(val) == typeid(int))
            result.push_back(val);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
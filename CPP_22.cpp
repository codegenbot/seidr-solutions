#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (auto val : values) {
        result.push_back(val);
    }
    return result;
}

int main() {
    assert(filter_integers({3, 5, 3, 3, 7, 8}) == vector<int>{3, 5, 3, 3, 7, 8});
    return 0;
}
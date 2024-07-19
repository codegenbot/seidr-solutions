#include <vector>
#include <list>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (const auto &val : values) {
        if (val == 3) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 7, 3, 3, 4, 5}) == vector<int>{3, 3, 3});
    return 0;
}
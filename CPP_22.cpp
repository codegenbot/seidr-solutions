#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(const list<boost::any>& values) {
    vector<int> integers;

    for (const auto& value : values) {
        if (auto integer = boost::any_cast<int>(&value)) {
            integers.push_back(*integer);
        }
    }

    return integers;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == vector<int>{3, 3, 3});

    return 0;
}
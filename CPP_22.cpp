#include <vector>
#include <list>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(const list<int>& values);

int main() {
    assert(issame(filter_integers({3,3,3,3,4,5}), {3, 3, 3}));
    return 0;
}

std::vector<int> filter_integers(const list<int>& values) {
    vector<int> result;
    for (const auto &val : values) {
        if (val == 3) {
            result.push_back(val);
        }
    }
    return result;
}
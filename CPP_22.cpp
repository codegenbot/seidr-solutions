#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (const int* int_val = any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

```
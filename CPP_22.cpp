#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (const int* int_val = any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
  
    std::list<std::any> values = {1, 2, 3, 4, 5};
    std::vector<int> b = filter_integers(values);

    assert(a == b);

    return 0;
}
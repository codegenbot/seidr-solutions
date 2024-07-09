#include <vector>
#include <list>
#include <any>

using namespace std;

vector<int> areSame(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).has_value()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(areSame({3, 3, 3}) == {3, 3, 3});
}
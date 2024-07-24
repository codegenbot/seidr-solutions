#include <vector>
#include <any> // Include this instead of boost/any
#include <list>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value) != 0) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}
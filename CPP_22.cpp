#include <vector>
#include <any>
#include <list>
#include <initializer_list>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}
#include <vector>
#include <list>
#include <any>

typedef std::list<std::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<bool>(value) && std::any_cast<int>(value)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}
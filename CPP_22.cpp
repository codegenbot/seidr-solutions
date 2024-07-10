#include <algorithm>
#include <cassert>
#include <list>
#include <vector>
#include <any>

using namespace std;
using std::any;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int i = any_cast<int>(value);
        if (!i.empty()) {
            result.push_back(i);
        }
    }
    return result;
}
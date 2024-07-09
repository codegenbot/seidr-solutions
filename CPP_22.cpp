#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue; 
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}
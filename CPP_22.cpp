#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) { // Check if boost::any_cast returns true
            int val = boost::any_cast<int>(value); // Try to cast the value to an integer
            if (!std::isnan(val) && val != 0) { // Check if the value is not NaN and not zero
                result.push_back(val);
            }
        }
    }
    return result;
}
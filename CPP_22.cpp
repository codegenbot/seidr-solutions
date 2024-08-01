#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).which() == boost::any::typecode<int>()) {
            int integer = boost::any_cast<int>(value);
            if(integer.good()) {
                result.push_back(integer);
            }
        } else if (boost::any_cast<double>(value).which() == boost::any::typecode<double>()) {
            double double_value = boost::any_cast<double>(value);
            if(double_value.good()) {
                result.push_back((int)double_value); // Convert double to int
            }
        }
    }
    return result;
}
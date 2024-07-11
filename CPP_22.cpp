#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector< boost::any > inputs = {3, 'c', 3, 3, 'a', 'b' };
vector<int> result = filter_integers(inputs);

vector<boost::any> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values | views::filter([](auto&& val){ return boost::holds_alternative<int>(val); })) {
        result.push_back(boost::get<int>(value));
    }
    return result;
}
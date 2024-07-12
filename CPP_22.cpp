#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>

typedef std::list<boost::any> list_any;

using namespace std;
vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<int>(value).second.first ? result.push_back(boost::any_cast<int>(value).second.first) : 0;
    }
    return result;
}
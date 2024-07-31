#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto &value : values) {
        if (auto ptr = boost::any_cast<int>(&value)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
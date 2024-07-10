#include <algorithm>
#include <cassert>
#include <list>
#include <vector>
#include <boost/any>

using namespace std;
using boost::any;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}
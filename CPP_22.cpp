#include <vector>
#include <any>
#include <algorithm>
#include <cassert>

using namespace std;
using std::any;

vector<int> filter_integers(const vector<any>& values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}
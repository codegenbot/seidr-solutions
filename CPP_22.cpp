#include <vector>
#include <any>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b);
vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    list<any> values = {std::any(10), std::any("hello"), std::any(20), std::any(30), std::any(40)};
    vector<int> filtered_values = filter_integers(values);

    for (int num : filtered_values) {
        cout << num << " ";
    }

    return 0;
}
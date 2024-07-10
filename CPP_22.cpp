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
    std::list<std::any> values = {1, 2, 3, "hello", 4};
    std::vector<int> filtered_values = filter_integers(values);

    for (int val : filtered_values) {
        std::cout << val << " ";
    }

    return 0;
}
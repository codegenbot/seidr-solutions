#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> filter_integers(std::list<boost::any> values);

int main() {
    // Main function code
}

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for (const auto &value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
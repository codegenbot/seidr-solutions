#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Main function implementation
    return 0;
}
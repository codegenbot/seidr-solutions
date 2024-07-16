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
    // Your main function code here
    return 0;
}
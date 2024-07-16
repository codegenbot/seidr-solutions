#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    // Main function logic here
    return 0;
}
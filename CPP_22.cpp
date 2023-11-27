#include <vector>
#include <list_any>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b);

int main()
{
    list_any values;
    vector<int> result = filter_integers(values);

    return 0;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
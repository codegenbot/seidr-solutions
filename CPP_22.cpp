#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeindex>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<boost::any> values = {3, 3, 3};
    vector<int> result = filter_integers(values);
    if (issame({1,2,3}, result)) {
        for (const auto& value : result) {
            cout << value << " ";
        }
        cout << endl;
    } else {
        cout << "Vectors are not same." << endl;
    }
    return 0;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
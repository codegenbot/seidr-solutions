#include <boost/any.hpp>
#include <list>
#include <vector>

using namespace boost;

bool is_same(const any& a, const any& b) {
    return a.type() == b.type();
}

int main() {
    list<any> values;
    
    values.push_back(any(5));
    values.push_back(any(10));
    values.push_back(any("hello"));
    values.push_back(any(15));

    vector<int> result = filter_integers(values);

    for (const auto& value : result) {
        cout << value << endl;
    }

    return 0;
}

vector<any> filter_integers(list<any> values) {
    vector<any> result;
    for (const auto& value : values) {
        if (is_same(value, any(10))) {
            result.push_back(value);
        }
    }
    return result;
}
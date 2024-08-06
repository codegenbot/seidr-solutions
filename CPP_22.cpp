#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (auto val : values) {
        if (auto int_val = boost::any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = filter_integers({1, 2, 3, "hello", 4, 5});
    
    assert(issame(a, b));
    
    return 0;
}
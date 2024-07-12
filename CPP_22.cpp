#include <boost/type_index.hpp>

bool issame(const vector<int>& a, const vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> input = {3, 3, 3};
    std::list<boost::any> values(input.begin(), input.end());
    std::vector<int> output = filter_integers(values);
    
    if(issame({1, 2}, output)) {
        // some code
    } else {
        // some other code
    }
    
    return 0;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}
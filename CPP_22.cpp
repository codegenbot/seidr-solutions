#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, boost::any(3), 3, boost::any(3), 'a', 'b'}) ,{3, 3, 3}));
    
}
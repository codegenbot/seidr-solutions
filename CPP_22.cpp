#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

vector<int> filter_integers(const list<boost::any>& values){
    vector<int> result;
    for(const auto &value : values){
        if(auto ptr = boost::any_cast<int>(&value)){
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
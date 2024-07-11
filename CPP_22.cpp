#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using boost::any;

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(typeid(int) == val.type()){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Main function code here
    return 0;
}
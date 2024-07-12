#include <boost/any.hpp>
#include <list>
#include <typeinfo>
using namespace std;

bool issame(const type_info& t1, const type_info& t2);

vector<int> filter_integers(std::list<boost::any> values);

int main() {
    // Main function code
}

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b);

int main()
{
    ...
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
    ...
}
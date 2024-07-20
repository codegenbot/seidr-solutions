#include<vector>
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any a = value;
        if (boost::get<int>(&a)) {
            result.push_back(boost::any_cast<int>(a));
        }
    }
    return result;
}
#include<vector>
using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto &value : values) {
        any_cast<int>(value); // throws if value is not an int
        result.push_back(any_cast<int>(value));
    }
    return result;
}
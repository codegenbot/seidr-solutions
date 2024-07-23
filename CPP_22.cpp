#include <vector>
#include <list>
#include <any>
#include <numeric>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    
    return true;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}
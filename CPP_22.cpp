#include<vector>
#include<string>
#include<list>
#include<stdany>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            try {
                int i = get<int>(value);
                result.push_back(i);
            } catch (...) {
                // ignore non-int values
            }
        }
    }
    return result;
}
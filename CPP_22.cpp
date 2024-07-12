#include<vector>
#include<string>
#include<stdany>
using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}
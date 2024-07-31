#include <vector>
#include <list>
#include <any>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}
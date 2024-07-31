#include <vector>
#include <any>
#include <list>
#include <cassert>
#include <typeinfo>

vector<int> filter_integers(std::list<std::any> values);

bool issame(vector<int>& a, vector<int>& b);

int main(){
    assert(issame(filter_integers({3, std::any('c'), 3, 3, std::any('a'), std::any('b')}), {3, 3, 3}));
    return 0;
}

vector<int> filter_integers(std::list<std::any> values){
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}
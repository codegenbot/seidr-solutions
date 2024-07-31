#include <vector>
#include <any>
#include <list>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(std::list<std::any> values);

int main(){
    assert(issame(filter_integers((3, 'c', 3, 3, 'a', 'b'), {3, 3, 3});
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
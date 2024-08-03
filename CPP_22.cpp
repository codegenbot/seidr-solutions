#include <iostream>
#include <vector>
#include <list>
#include <any>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a==b)
        return true;
    else
        return false;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).has_value()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list<any> lst = {3, any('c'), 3, 3, any('a'), any('b')};
    assert(issame(filter_integers(lst),vector<int>{3, 3, 3}));
    return 0;
}
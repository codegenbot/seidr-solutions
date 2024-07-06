#include <iostream>
#include <vector>
#include <list>
#include <typeindex>
#include <any>

using namespace std;

bool operator==(const vector<any>& a, const vector<any>& b) {
    return a == b;
}

vector<any> list_any(int x) {
    vector<any> result;
    result.push_back(x);
    result.push_back(3.5); 
    return result;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == type_index<int>()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, any('c'), 3, any(3), any(3), any('a'), any('b')}) == vector<any>({3, 3, 3}));
    return 0;
}
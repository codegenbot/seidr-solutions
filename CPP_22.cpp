#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int castedValue = any_cast<int>(value);
            if (castedValue != 0) { 
                result.push_back(castedValue);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 0, 3, 3, 0, 'b'}),{3,3,3}));
    return 0;
}
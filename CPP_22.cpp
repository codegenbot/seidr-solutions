#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(value >= 0 && value <= 255) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), vector<int>({3, 3, 3})));
    return 0;
}
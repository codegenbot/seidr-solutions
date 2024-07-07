#include <vector>
#include <list>
#include <iostream>

using namespace std;
using namespace boost;

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int x = get<int>(value);
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')} ),{3, 3, 3}) );
    return 0;
}
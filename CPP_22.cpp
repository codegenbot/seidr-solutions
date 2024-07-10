#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<int> values);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<int> values){
    vector<int> result;
    for (auto val : values) {
        result.push_back(val);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 2, 3, 3, 1, 2}), {3, 3, 3}));
    return 0;
}
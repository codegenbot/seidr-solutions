#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& val : values) {
        if (const int* int_val = any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
  
    list<any> values = {1, 2, 3, 4, 5};
    vector<int> b = filter_integers(values);

    assert(issame(a, b));

    return 0;
}
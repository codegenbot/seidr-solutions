#include <iostream>
#include <vector>
#include <variant>
#include <cassert>

using namespace std;

using VarType = variant<int, char>;

vector<int> filter_integers(const vector<VarType>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (holds_alternative<int>(val)) {
            result.push_back(get<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "All tests passed!" << endl;
}
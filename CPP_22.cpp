#include <vector>
#include <any>
using namespace std;

bool issame(int a, int b) { return a == b; }

vector<int> filter_integers(any values) {
    vector<int> result;
    for (auto& value : any_cast<vector<any>>(values)) {
        if (holds_alternative<int>(value)) {
            int val = get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    any values({3, 3.0, 3}); // Note: You cannot directly store chars in a vector of ints.
    auto output = filter_integers(values);
    for (auto val : output) {
        cout << val << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool issame(const vector<any>& a, const vector<any>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        any a_val = a[i];
        any b_val = b[i];
        
        if (!(holds_alternative<int>(a_val) && holds_alternative<int>(b_val)))
            continue;

        int a_int = get<int>(a_val);
        int b_int = get<int>(b_val);

        if (a_int != b_int)
            return false;
    }
    return true;
}

vector<int> filter_integers(const list<any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int value_int = get<int>(value);
            result.push_back(value_int);
        }
    }
    return result;
}

int main() {
    list<any> inputs = {any(3), any(67), any(45), any(34)};
    vector<int> integers = filter_integers(inputs);

    bool same = issame({any(3), any(67), any(45), any(34)}, {any(3), any(67), any(45), any(34)});

    if (same)
        cout << "Inputs are the same" << endl;
    else
        cout << "Inputs are different" << endl;

    return 0;
}
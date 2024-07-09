#include <iostream>
#include <vector>
#include <variant>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<variant<int>> filter_integers(initializer_list<variant<int>> values) {
    vector<variant<int>> result;
    for (const auto& value : values) {
        try {
            if (value.index() == 0) { 
                int val = get<int>(value);
                bool found = false;
                for (auto& v : result) {
                    if (v.index() == 0 && get<int>(v) == val) {
                        found = true;
                        break;
                    }
                }
                if (!found)
                    result.push_back(value); 
            }
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    vector<variant<int>> integers = filter_integers({{1}, {2}, {3}});
    if (issame({1, 2}, integers | views::filter([](auto v) { return v.index() == 0; })) ) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
}
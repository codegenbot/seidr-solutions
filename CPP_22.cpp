#include <iostream>
#include <vector>

using namespace std;

std::vector<int> filter_integers(vector<variant<int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (get_if<int>(&value)) {
            result.push_back(*get_if<int>(&value));
        }
    }
    return result;

}

bool is_same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}
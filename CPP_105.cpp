```cpp
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}

vector<string> by_length(vector<int> arr) {
    vector<string> num_arr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            num_arr.push_back(to_string(i));
    }
    sort(num_arr.begin(), num_arr.end());
    reverse(num_arr.begin(), num_arr.end());
    vector<string> result;
    map<int, string> num_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                 {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : num_arr) {
        if (i >= 1 && i <= 9)
            result.push_back(num_map[i]);
    }
    return result;
}
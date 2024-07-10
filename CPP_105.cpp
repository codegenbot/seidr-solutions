#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> input_nums = {5, 2, 9, 4, 1, 11, 7};
    vector<string> result = by_length(input_nums);

    for (const auto& str : result) {
        std::cout << str << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> strange_sort_list(const std::vector<int>& input) {
    std::vector<int> output = input;
    std::sort(output.begin(), output.end());
    return output;
}

int main() {
    // Main function logic here
    return 0;
}
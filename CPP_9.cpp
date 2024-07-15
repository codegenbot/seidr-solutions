#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    // Main function where you can test the corrected code
    return 0;
}
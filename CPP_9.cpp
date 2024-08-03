#include <vector>
#include <cassert>

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int maxSoFar = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        maxSoFar = max(maxSoFar, numbers[i]);
        result.push_back(maxSoFar);
    }
    return result;
}

int main() {
    // Your main function logic here
    return 0;
}
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i * 3 / 2);
    }
    return result;
}

int main() {
    vector<pair<int, vector<int>>> testCases = {
        {3, {1, 2, 6}},
        // Add more test cases here
    };

    for (const auto& testCase : testCases) {
        assert(f(testCase.first) == testCase.second);
    }

    return 0;
}
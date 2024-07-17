#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> result;
        int n = text.length();
        int m = target.length();

        for (int i = 0; i <= n - m; i++) {
            bool found = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }

        return result;
    }
};

// Testing code
int main() {
    Solution solution;

    // Input and output pairs
    pair<string, string> inputs[] = {
        {"a", "a"},
        {"!", "!"},
        {"rnm,xcnwqnd@#$fwkdjn3", "r"},
        {"hihihihihihihihihihi", "hi"}
    };

    // Expected output indices
    vector<vector<int>> expectedOutputIndices = {
        {{0}},
        {{1}, {0}},
        {{0}},
        {{0}}
    };

    for (int i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++) {
        string text = inputs[i].first;
        string target = inputs[i].second;

        vector<int> outputIndices = solution.findIndices(text, target);

        if (outputIndices != expectedOutputIndices[i]) {
            printf("Test case failed for input (%s, %s). Expected: %d, Actual: %d.\n",
                   text.c_str(), target.c_str(),
                   expectedOutputIndices[i][0], outputIndices[0]);
        }
    }

    return 0;
}
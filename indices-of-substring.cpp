#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        int textSize = text.length();
        int targetSize = target.length();

        for (int i = 0; i <= textSize - targetSize; i++) {
            bool match = true;
            for (int j = 0; j < targetSize; j++) {
                if (text[i + j] != target[j]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                indices.push_back(i);
            }
        }

        return indices;
    }
};

int main() {
    Solution solution;

    string text, target;
    cin >> text >> target;

    vector<int> indices = solution.findIndices(text, target);

    for (int i : indices) {
        cout << i << endl;
    }

    return 0;
}
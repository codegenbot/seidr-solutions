#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> result;
        for (int i = 0; i <= text.length() - target.length(); i++) {
            bool found = true;
            for (int j = 0; j < target.length(); j++) {
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
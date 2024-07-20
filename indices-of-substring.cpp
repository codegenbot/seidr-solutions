#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        int length = target.length();
        for (int i = 0; i <= text.length() - length; i++) {
            if (text.substr(i, length) == target) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};
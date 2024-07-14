#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        for (int i = 0; i <= text.length() - target.length(); i++) {
            if (text.substr(i, target.length()) == target) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        int start = 0;
        while (start <= text.length() - target.length()) {
            int pos = text.find(target, start);
            if (pos != -1) {
                indices.push_back(pos);
                start = pos + 1;
            } else {
                break;
            }
        }
        return indices;
    }
};
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> indicesOfSubstring(string text, string target) {
        vector<int> result;
        int pos = 0;
        
        while ((pos = text.find(target, pos)) != string::npos) {
            result.push_back(pos);
            pos += 1; // start searching from the next position
        }
        
        return result;
    }
};
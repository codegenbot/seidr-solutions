#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> result;
        int start = 0;
        
        while (start < text.length()) {
            int pos = text.find(target, start);
            
            if (pos == -1)
                break;
            
            result.push_back(pos);
            start = pos + 1;
        }
        
        return result;
    }
};
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> result;
        int n = text.length();
        int m = target.length();

        for(int i=0; i<=n-m; i++) {
            bool match = true;
            for(int j=0; j<m; j++) {
                if(text[i+j] != target[j]) {
                    match = false;
                    break;
                }
            }
            if(match) {
                result.push_back(i);
            }
        }

        return result;
    }
};
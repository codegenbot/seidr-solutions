#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        for(int i = 0; i <= text.length() - target.length(); i++){
            bool found = true;
            for(int j = 0; j < target.length(); j++){
                if(text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if(found) indices.push_back(i);
        }
        return indices;
    }
};

int main() {
    Solution solution;
    string text, target;
    cin >> text >> target;
    vector<int> result = solution.findIndices(text, target);
    for(int i : result) cout << i << " ";
    return 0;
}
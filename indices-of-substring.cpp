#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> indices;
        int len = target.length();
        for(int i = 0; i <= text.length() - len; i++) {
            if(text.substr(i, len) == target) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};

int main() {
    Solution solution;
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> result = solution.findIndices(text, target);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
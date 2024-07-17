#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(string text, string target) {
        vector<int> result;
        int targetLen = target.length();
        for(int i=0; i<=text.length()-targetLen; i++){
            bool match = true;
            for(int j=0; j<targetLen; j++){
                if(text[i+j] != target[j]){
                    match = false;
                    break;
                }
            }
            if(match){
                result.push_back(i);
            }
        }
        return result;
    }
};

// Driver code
int main() {
    Solution solution;

    string text, target;
    cin >> text >> target;

    vector<int> indices = solution.findIndices(text, target);

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}
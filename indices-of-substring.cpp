#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    
    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m).compare(target) == 0)
            result.push_back(i);
    }
    
    return result;
}

int main() {
    string text;
    int numTargets;
    cin >> text >> numTargets;

    vector<int> indices = indicesOfSubstring(text, "");

    for(int i=0; i<numTargets; i++){
        string target;
        cin >> target;
        cout << "[";
        for(auto idx : indicesOfSubstring(text, target)){
            cout << idx;
            if(i < numTargets-1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
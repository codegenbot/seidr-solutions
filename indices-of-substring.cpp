#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for(int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while(j < target.length()) {
            if(text[i + j] != target[j]) break;
            j++;
        }
        if(j == target.length()) indices.push_back(i);
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i : result) cout << i << " ";
    return 0;
}
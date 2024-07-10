#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) indices.push_back(i);
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = findIndices(text, target);
    for(int i : res) cout << i << " ";
    return 0;
}
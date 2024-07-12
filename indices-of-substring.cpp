#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for(int j = 0; j < target.size(); j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int i: res) cout << i << " ";
    return 0;
}
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        int j = 0;
        while(j < target.size()) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
            j++;
        }
        if(found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices) {
        cout << i << endl;
    }
    return 0;
}
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        for(int j = 0; j < target.length(); j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n, m;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, text.substr(0, 1));
    cout << indices[0] << endl;
    return 0;
}
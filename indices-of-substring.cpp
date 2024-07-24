#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) indices.push_back(i);
    }
    return indices;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    vector<int> result = findIndices(text, text.substr(0, n));
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
}
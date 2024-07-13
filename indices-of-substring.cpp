#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, n == 1 ? "" : to_string(n));
    for (int i : indices) {
        cout << i << " ";
    }
    return 0;
}
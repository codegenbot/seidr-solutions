#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int pos = 0;
    while (pos <= text.length() - target.length()) {
        pos = text.find(target, pos);
        if (pos != string::npos) {
            result.push_back(pos);
            pos += 1; // to avoid duplicate indices
        } else break;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, text.substr(0, n));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int j = 0;
    while (j <= text.length() - target.length()) {
        int i = 0;
        while (i < target.length() && text[j + i] == target[i]) {
            i++;
        }
        if (i == target.length()) {
            indices.push_back(j);
            j += i;
        } else {
            j++;
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> result = findIndices(text, text.substr(0, 1));
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
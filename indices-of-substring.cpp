#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int i = 0;
    while (i <= text.length() - target.length()) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) {
                break;
            }
            j++;
        }
        if (j == target.length()) {
            indices.push_back(i);
            i += j;
        } else {
            i++;
        }
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (auto index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
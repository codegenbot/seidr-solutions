#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0) {
            indices.push_back(index);
            index += target.length();
        } else {
            index++;
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, text);
        if (i == 0) {
            cout << text.length() - 1 << endl;
        } else {
            vector<int> result = findIndices(text, "hi");
            for (int x : result) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
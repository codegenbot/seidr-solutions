#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while ((int)(start = text.find(target, start)) != -1) {
        indices.push_back(start);
        start += 1; // increment start to avoid overlapping targets
    }
    return indices;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    cout << "[";
    for (auto i : findIndices(text, text.substr(0, n))) {
        cout << i;
        if (i != 0) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}
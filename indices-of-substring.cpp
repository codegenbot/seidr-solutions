#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while ((start = text.find(target, start)) != string::npos) {
        indices.push_back(start);
        start += 1; // increment by 1 for overlapping targets
    }
    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}
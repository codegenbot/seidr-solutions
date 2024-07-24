#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        int pos = text.find(target, start);
        if (pos != -1) {
            indices.push_back(pos);
            start = pos + 1;
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    return 0;
}
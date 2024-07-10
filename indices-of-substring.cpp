#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textSize = text.size();
    int targetSize = target.size();

    for (int i = 0; i <= textSize - targetSize; ++i) {
        bool match = true;
        for (int j = 0; j < targetSize; ++j) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    int textSize;
    cin >> textSize;

    string text(textSize, ' ');
    cin.ignore();
    cin.read((char *)(&text[0]), textSize);

    int targetSize;
    cin >> targetSize;

    string target(targetSize, ' ');
    cin.ignore();
    cin.read((char *)(&target[0]), targetSize);

    vector<int> indices = findIndices(text, target);
    for (int index : indices) {
        cout << index << endl;
    }

    return 0;
}
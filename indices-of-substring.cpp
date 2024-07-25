#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int start = 0;
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos) break;
        result.push_back(pos);
        start = pos + 1;
    }
    return result;
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}
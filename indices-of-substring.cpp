#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
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
    // sample input
    string text;
    cout << "Enter the text: ";
    cin >> text;

    string target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    cout << "Indices of substring at which it appears in the text are: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
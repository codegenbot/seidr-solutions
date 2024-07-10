#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last = -1;
    while ((last = text.find(target, last + 1)) != string::npos) {
        result.push_back(last);
        last++;
    }
    return result;
}

int main() {
    // Example usage
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices at which the target appears: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
Here is the solution:

#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    // Sample usage
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}
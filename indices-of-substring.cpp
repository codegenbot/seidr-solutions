Here is the solution:

#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = -1;

    while ((index = text.find(target)) != string::npos) {
        result.push_back(index);
        text.erase(0, index + target.size());
    }

    return result;
}

int main() {
    // Read the input from user
    string text;
    cout << "Enter a text: ";
    getline(cin, text);

    string target;
    cout << "Enter a target: ";
    getline(cin, target);

    // Call the function
    vector<int> indices = indicesOfSubstring(text, target);

    // Print the output
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
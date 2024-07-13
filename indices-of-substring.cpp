#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    
    while ((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    
    return result;
}

int main() {
    // Get the input from user
    string text;
    cin >> text;

    // Get the target substring
    string target;
    cin >> target;

    // Call the function to find the indices of the target in the text
    vector<int> result = indicesOfSubstring(text, target);

    // Print the result
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
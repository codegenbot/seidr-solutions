#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        size_t found = text.find(target, start);
        
        if (found != string::npos) {
            result.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    // Read input from user
    string text;
    cin >> text;

    // Read the target string
    string target;
    cin >> target;

    // Call the function to get the indices
    vector<int> res = indicesOfSubstring(text, target);

    // Print the output
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}
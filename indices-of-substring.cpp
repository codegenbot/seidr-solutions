#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);
    
    if(result.size() == 0)
        cout << "Target not found in text.";
    else
        cout << "Indices of the target in the text are: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
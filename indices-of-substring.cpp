#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    
    for(int i = 0; i <= text.length() - len; i++) {
        if(text.substr(i, len) == target) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```c++
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);

    cout << "Indices of substring are: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
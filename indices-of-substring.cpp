Here is the solution:

#include <vector>
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
    // Your code here
    string text, target;
    cin >> text >> target;

    vector<int> res = indicesOfSubstring(text, target);

    for (int i : res)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    vector<int> indices = findIndices(text, text.substr(0, n));
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}
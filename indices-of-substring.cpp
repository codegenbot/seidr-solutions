#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int len = target.length();
    for (int i = 0; i <= text.length() - len; i++) {
        if (text.substr(i, len) == target)
            result.push_back(i);
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}
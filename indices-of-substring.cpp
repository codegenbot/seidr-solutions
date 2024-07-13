#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> result;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; ++i) {
        if (text.substr(i, targetLength) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = findIndices(text, target);
    for (int index : indices) {
        cout << index << endl;
    }
    return 0;
}
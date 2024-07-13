#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
            // check if the target appears at other positions in the text
            int j = i + target.size();
            while (j < text.size()) {
                if (text.substr(j, target.size()) == target) {
                    result.push_back(j);
                }
                ++j;
            }
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter the text: ";
    cin >> text;
    string target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> res = indicesOfSubstring(text, target);

    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}
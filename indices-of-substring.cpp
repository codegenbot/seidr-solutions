#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()).compare(target) == 0) {
            result.push_back(i);
            // search for the same target in remaining text
            int j = i + target.size();
            while (j < text.size()) {
                if (text.substr(j, target.size()).compare(target) == 0) {
                    result.push_back(j);
                    j += target.size();
                } else {
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
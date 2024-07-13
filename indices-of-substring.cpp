#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;

    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0) {
            result.push_back(index);
            index += target.length();
        } else {
            index++;
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> output = indicesOfSubstring(text, target);
    for (auto i : output) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
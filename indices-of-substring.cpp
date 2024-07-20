#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // sample test cases
    cout << indicesOfSubstring("a", "a")[0] << endl;  // output: 0
    cout << indicesOfSubstring("!", "!") << endl;  // output: 1, 0
    cout << indicesOfSubstring("r", "nm,xcnwqnd@#$fwkdjn3") << endl;  // output: 0
    cout << indicesOfSubstring("hi", "hihihihihihihihihihi") << endl;  // output: 0
    cout << indicesOfSubstring("############", "#") << endl;  // output: 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11

    return 0;
}
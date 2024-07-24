#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Test cases
    cout << "Indices of substring 'a' in 'a': ";
    for (int num : indicesOfSubstring("a", "a")) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Indices of substring '!' in '!!': ";
    for (int num : indicesOfSubstring("!", "!")) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Indices of substring 'r' in 'rnm,xcnwqnd@#$fwkdjn3': ";
    for (int num : indicesOfSubstring("rnm,xcnwqnd@#$fwkdjn3", "r")) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Indices of substring 'hi' in 'hihihihihihihihihihi': ";
    for (int num : indicesOfSubstring("hihihihihihihihihihi", "hi")) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Indices of substring '#' in '##########': ";
    for (int num : indicesOfSubstring("##########", "#")) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Test cases
    string text1 = "a";
    string target1 = "5";
    cout << "{ ";
    for (int i : indicesOfSubstring(text1, target1)) {
        cout << i << " ";
    }
    cout << "}\n";

    string text2 = "!";
    string target2 = "! ";
    cout << "{ ";
    for (int i : indicesOfSubstring(text2, target2)) {
        cout << i << " ";
    }
    cout << "}\n";

    string text3 = "r";
    string target3 = "nm,xcnwqnd@#$fwkdjn3";
    cout << "{ ";
    for (int i : indicesOfSubstring(text3, target3)) {
        cout << i << " ";
    }
    cout << "}\n";

    string text4 = "hi";
    string target4 = "hihihihihihihihihihi";
    cout << "{ ";
    for (int i : indicesOfSubstring(text4, target4)) {
        cout << i << " ";
    }
    cout << "}\n";

    string text5 = "############";
    string target5 = "#";
    cout << "{ ";
    for (int i : indicesOfSubstring(text5, target5)) {
        cout << i << " ";
    }
    cout << "}\n";

    return 0;
}
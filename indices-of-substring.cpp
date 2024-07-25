#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // test cases
    string text1 = "a";
    string target1 = "5";
    vector<int> result1 = indicesOfSubstring(text1, target1);
    cout << "Indices of substring in '" << text1 << "' for target '" << target1 << "': ";
    for(int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    string text2 = "!";
    string target2 = "!!";
    vector<int> result2 = indicesOfSubstring(text2, target2);
    cout << "Indices of substring in '" << text2 << "' for target '" << target2 << "': ";
    for(int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    string text3 = "r";
    string target3 = "nm,xcnwqnd@#$fwkdjn3";
    vector<int> result3 = indicesOfSubstring(text3, target3);
    cout << "Indices of substring in '" << text3 << "' for target '" << target3 << "': ";
    for(int i : result3) {
        cout << i << " ";
    }
    cout << endl;

    string text4 = "hi";
    string target4 = "hihihihihihihihihihi";
    vector<int> result4 = indicesOfSubstring(text4, target4);
    cout << "Indices of substring in '" << text4 << "' for target '" << target4 << "': ";
    for(int i : result4) {
        cout << i << " ";
    }
    cout << endl;

    string text5 = "############";
    string target5 = "#";
    vector<int> result5 = indicesOfSubstring(text5, target5);
    cout << "Indices of substring in '" << text5 << "' for target '" << target5 << "': ";
    for(int i : result5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
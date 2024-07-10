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
    vector<int> output1 = indicesOfSubstring(text1, "");
    cout << output1[0] << endl;

    string text2 = "!!";
    vector<int> output2 = indicesOfSubstring(text2, "!");
    for(int i : output2) {
        cout << i << " ";
    }
    cout << endl;

    string text3 = "rnm,xcnwqnd@#$fwkdjn3";
    vector<int> output3 = indicesOfSubstring(text3, "r");
    cout << output3[0] << endl;

    string text4 = "hihihihihihihihihihi";
    vector<int> output4 = indicesOfSubstring(text4, "hi");
    for(int i : output4) {
        cout << i << " ";
    }
    cout << endl;

    string text5 = "############";
    vector<int> output5 = indicesOfSubstring(text5, "#");
    for(int i : output5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
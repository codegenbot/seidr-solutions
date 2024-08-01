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
    // Test cases
    string text1 = "a";
    string target1 = "5";
    vector<int> output1 = indicesOfSubstring(text1, target1);
    cout << output1[0] << endl;

    string text2 = "!";
    string target2 = "!!";
    vector<int> output2 = indicesOfSubstring(text2, target2);
    for (int i : output2) {
        cout << i << endl;
    }

    string text3 = "rnm,xcnwqnd@#$fwkdjn3";
    string target3 = "r";
    vector<int> output3 = indicesOfSubstring(text3, target3);
    cout << output3[0] << endl;

    string text4 = "hihihihihihihihihihi";
    string target4 = "hi";
    vector<int> output4 = indicesOfSubstring(text4, target4);
    cout << output4[0] << endl;

    string text5 = "############";
    string target5 = "#";
    vector<int> output5 = indicesOfSubstring(text5, target5);
    for (int i : output5) {
        cout << i << endl;
    }

    return 0;
}
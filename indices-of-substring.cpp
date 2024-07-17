#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=n-m; i++) {
        if(text.substr(i,m) == target)
            result.push_back(i);
    }
    
    return result;
}

int main() {
    // Test cases
    string text1 = "a";
    string target1 = "5";
    cout << indicesOfSubstring(text1, target1)[0] << endl;  // Output: 0

    string text2 = "!";
    string target2 = "!!";
    vector<int> result2 = indicesOfSubstring(text2, target2);
    for(int i : result2) {
        cout << i << " ";
    }
    cout << endl;  // Output: 1 0

    string text3 = "rnm,xcnwqnd@#$fwkdjn3";
    string target3 = "r";
    vector<int> result3 = indicesOfSubstring(text3, target3);
    for(int i : result3) {
        cout << i << " ";
    }
    cout << endl;  // Output: 0

    string text4 = "hihihihihihihihihihi";
    string target4 = "hi";
    vector<int> result4 = indicesOfSubstring(text4, target4);
    for(int i : result4) {
        cout << i << " ";
    }
    cout << endl;  // Output: 0

    string text5 = "############";
    string target5 = "#";
    vector<int> result5 = indicesOfSubstring(text5, target5);
    for(int i : result5) {
        cout << i << " ";
    }
    cout << endl;  // Output: 12 0 1 2 3 4 5 6 7 8 9 10 11

    return 0;
}
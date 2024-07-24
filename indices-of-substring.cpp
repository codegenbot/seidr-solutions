#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    
    for(int i=0; i<=text.length()-len; i++){
        if(text.substr(i, len) == target)
            result.push_back(i);
    }
    
    return result;
}

int main() {
    // Your test cases
    string text1 = "a";
    string target1 = "5";
    vector<int> result1 = indicesOfSubstring(text1, target1);

    string text2 = "!";
    string target2 = "!!";
    vector<int> result2 = indicesOfSubstring(text2, target2);

    string text3 = "r";
    string target3 = "nm,xcnwqnd@#$fwkdjn3";
    vector<int> result3 = indicesOfSubstring(text3, target3);

    string text4 = "hi";
    string target4 = "hihihihihihihihihihi";
    vector<int> result4 = indicesOfSubstring(text4, target4);

    string text5 = "############";
    string target5 = "#";
    vector<int> result5 = indicesOfSubstring(text5, target5);

    return 0;
}
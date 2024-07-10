#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    // test cases
    string text1 = "a";
    string target1 = "5";
    vector<int> output1 = indicesOfSubstring(text1, target1);
    cout << output1[0] << endl;  // expected output: 0

    string text2 = "!";
    string target2 = "!!";
    vector<int> output2 = indicesOfSubstring(text2, target2);
    for(int i=0; i<output2.size(); i++){
        cout << output2[i] << " ";
    }
    cout << endl;  // expected output: 1 0

    string text3 = "r";
    string target3 = "nm,xcnwqnd@#$fwkdjn3";
    vector<int> output3 = indicesOfSubstring(text3, target3);
    for(int i=0; i<output3.size(); i++){
        cout << output3[i] << " ";
    }
    cout << endl;  // expected output: 0

    string text4 = "hi";
    string target4 = "hihihihihihihihihihi";
    vector<int> output4 = indicesOfSubstring(text4, target4);
    for(int i=0; i<output4.size(); i++){
        cout << output4[i] << " ";
    }
    cout << endl;  // expected output: 0

    string text5 = "############";
    string target5 = "#";
    vector<int> output5 = indicesOfSubstring(text5, target5);
    for(int i=0; i<output5.size(); i++){
        cout << output5[i] << " ";
    }
    cout << endl;  // expected output: 12 0 1 2 3 4 5 6 7 8 9 10 11
    return 0;
}
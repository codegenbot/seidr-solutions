#include<iostream>
#include<vector>
#include<string>
using namespace std;

string match_parens(vector<string> lst){
    string result = "No";
    int count = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                if (count > 0) {
                    count--;
                } else {
                    return "No";
                }
            }
        }
    }
    if (count == 0) {
        result = "Yes";
    }
    return result;
}

int main() {
    vector<string> input = {"()(", ")"};
    cout << match_parens(input) << endl;
    return 0;
}
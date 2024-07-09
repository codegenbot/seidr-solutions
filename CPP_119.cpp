#include <iostream>
#include <vector>
using namespace std;

string match_parens(vector<string> lst) {
    int totalOpen = 0, totalClose = 0;
    
    for(auto str : lst) {
        for(char c : str) {
            if(c == '(') totalOpen++;
            else if(c == ')') totalClose++;
        }
    }
    
    if(totalOpen == totalClose)
        return "Yes";
    else
        return "No";
}

int main() {
    vector<string> input;
    string temp;

    while (true) {
        cin >> temp;
        if (temp == "0")
            break;
        input.push_back(temp);
    }

    cout << match_parens(input);

    return 0;
}
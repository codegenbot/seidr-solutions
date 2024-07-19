```cpp
#include <iostream>
#include <vector>
using namespace std;

string matchParens(vector<string> lst) {
    int countOpen = 0, countClose = 0;
    
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }
    
    return (countOpen == countClose) ? "Yes" : "No";
}

int main() {
    vector<string> input;
    string temp;
    
    while(true){
        cout << "Enter a string. Enter 'quit' to stop.\n";
        cin >> temp;
        
        if(temp=="quit") break;
        input.push_back(temp);
    }
    
    for (const string& s : input) {
        cout << matchParens({s}) << endl; 
    }
    return 0;
}
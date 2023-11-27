#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int max_level = 0;
    int current_level = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        } else if (c == ')') {
            current_level--;
        }
    }
    
    return levels;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<int> result = parse_nested_parens(input);
    
    for (int level : result) {
        cout << level << " ";
    }
    
    return 0;
}
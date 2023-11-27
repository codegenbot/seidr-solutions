#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int current_level = 0;
    int max_level = 0;
    
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        } else if (paren_string[i] == ')') {
            current_level--;
        }
        
        if (paren_string[i] == ' ') {
            levels.push_back(max_level);
            current_level = 0;
            max_level = 0;
        }
    }
    
    levels.push_back(max_level);
    
    return levels;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<int> result = parse_nested_parens(input);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
#include <stack>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<string> parentheses;
    string current = "";

    for (char c : paren_string) {
        if (c == '(') {
            current += c;
            parentheses.push(current);
            current = "";
        } else if (c == ')') {
            current += c;
            string prev = parentheses.top();
            prev.pop_back(); // remove the last character which is '('
            while (!prev.empty() && prev.back() != '(') {
                prev.pop_back();
            }
            prev.pop_back(); // remove the '('
            result.push_back(prev);
            current = "";
        }
    }

    return result;
}
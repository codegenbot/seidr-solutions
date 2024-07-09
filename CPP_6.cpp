#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int maxDepth = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            int depth = 1;
            for (++i; i < paren_string.size() && paren_string[i] != ')'; ++i) {
                if (paren_string[i] == '(') depth++;
                else if (paren_string[i] == ')') depth--;
                if (depth > maxDepth) maxDepth = depth;
            }
        } else if (paren_string[i] == ')') {
            int depth = 1;
            for (--i; i >= 0 && paren_string[i] != '('; --i) {
                if (paren_string[i] == ')') depth++;
                else if (paren_string[i] == '(') depth--;
                if (depth > maxDepth) maxDepth = depth;
            }
        }
    }
    result.push_back(maxDepth);
    return result;
}
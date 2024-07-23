#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> depth;
    int maxDepth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth.push(1);
            if (depth.size() > maxDepth)
                maxDepth = depth.size();
        } else if (c == ')') {
            depth.pop();
        }
    }

    while (!depth.empty()) {
        result.push_back(depth.top());
        depth.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> result = parse_nested_parens("(()(())((()))"); 
    return 0;
}
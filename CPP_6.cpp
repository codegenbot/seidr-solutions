#pragma GCC diagnostic push
{
#pragma GCC diagnostic ignored "-Wignored-qualifiers"
}
#include <stack>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

#pragma GCC diagnostic push
{
#pragma GCC diagnostic ignored "-Wignored-qualifiers"
}
    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = std::max(max_nesting, (int)nesting_levels.size());
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = std::max(max_nesting, (int)nesting_levels.size());
        }
    }

#pragma GCC diagnostic pop

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.size());
        nesting_levels.pop();
    }

    return result;
}

int main() {
  string input = "(()(())((()))";
  vector<int> result = parse_nested_parens(input);
  for (int i : result) {
    cout << i << endl;
  }
  return 0;
}
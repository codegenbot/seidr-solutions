#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    string paren_string = "(()(())((())))";
    vector<int> result = parse_nested_parens(paren_string);
    return 0;
}
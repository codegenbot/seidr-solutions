#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    return depths;
}
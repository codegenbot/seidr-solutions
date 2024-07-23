```cpp
using namespace std;

std::string match_parens(vector<string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
        }
    }
    return to_string(open == 0);
}
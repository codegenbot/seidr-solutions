using namespace std;

std::string match_parens(std::vector<std::string> lst) {
    int open = 0;
    int close = 0;
    for (const std::string& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}
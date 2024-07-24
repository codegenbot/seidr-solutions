#include <vector>
#include <string>

bool match_parens(std::vector<std::string> lst) {
    int countOpen = 0, countClose = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else countClose++;
        }
    }

    return countOpen == countClose;
}

int main() {
    std::vector<std::string> input = {{"(())"}, {"(())", "((()))"}};
    for (const auto& s : input) {
        cout << (match_parens({s}) ? "Yes" : "No") << endl;
    }
    return 0;
}
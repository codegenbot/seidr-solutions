#include <string>
#include <vector>
#include <cassert>

std::string match_parens(std::vector<std::string> lst){
    int count = 0;
    for (std::string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}

int main() {
    assert (match_parens({")", "("}) == "Yes" );

    return 0;
}
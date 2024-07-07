#include <vector>
#include <string>

using namespace std;

int match_parens(initializer_list<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        if (s == "(") open++;
        else if (s == ")") close++;
    }
    return (open == close) ? 1 : 0;
}

int main() {
    assert(match_parens({"" , "("}) == 0 );
    return 0;
}
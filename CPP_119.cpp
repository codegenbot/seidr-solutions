#include <vector>
using namespace std;

int match_parens(int n) {
    int open = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) open++;
        else open--;
        if (open < 0) return 0;
    }
    return open == 0 ? 1 : 0;
}

int main() {
    if (match_parens(4) == 0) cout << "No"; else cout << "Yes";
    return 0;
}
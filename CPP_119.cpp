```cpp
#include <vector>
#include <string>
using namespace std;

bool match_parens(vector<string> lst) {
    int stack_size = 0;
    bool is_good = true;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                stack_size++;
            } else if (c == ')') {
                if (stack_size <= 0) {
                    is_good = false;
                    break;
                }
                stack_size--;
            }
        }
    }

    return is_good ? "Yes" : "No";
}

int main() {
    vector<string> lst = {"(())", "()()"};
    string result = match_parens(lst);
    cout << result << endl;
    return 0;
}
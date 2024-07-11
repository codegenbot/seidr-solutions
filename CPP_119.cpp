char stack[10000];
int top = 0;

string match_parens(vector<string> lst){
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                stack[top++] = c;
            } else {
                if (top == 0) {
                    return "No";
                }
                top--;
            }
        }
    }
    return top == 0 ? "Yes" : "No";
}
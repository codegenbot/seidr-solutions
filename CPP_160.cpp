#include <cmath>
#include <stack>
#include <string>
#include <vector>

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand[operator_.size()]);
    
    int result = eval(expression);
    
    return result;
}

long long eval(const string& s) {
    int n = s.size();
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) {
            int num = 0;
            while (i < n && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            st.push(num);
        } else if (s[i] == '(') {
            i++;
            stack<int> temp;
            while (i < n && s[i] != ')') {
                if (isdigit(s[i])) {
                    int num = 0;
                    while (i < n && isdigit(s[i])) {
                        num = num * 10 + (s[i] - '0');
                        i++;
                    }
                    temp.push(num);
                } else if (s[i] == '(') {
                    temp.push(eval("(" + s.substr(i++) + ")"));
                } else if (s[i] == ')') {
                    break;
                }
            }
            while (!temp.empty()) {
                st.push(temp.top());
                temp.pop();
            }
        }
    }
    
    int res = 0;
    char op = '+';
    for (; !st.empty() || op != '+' ; ) {
        if (op == '+') {
            res += st.top();
            st.pop();
        } else if (op == '-') {
            res -= st.top();
            st.pop();
        } else if (op == '*') {
            int num = st.top() * 1;
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num *= st.top();
                st.pop();
            }
            res += num;
        } else if (op == '/') {
            int num = st.top() / 1;
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num /= st.top();
                st.pop();
            }
            res += num;
        } else if (op == '**') {
            int num = pow(st.top(), 1);
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num = pow(num, st.top());
                st.pop();
            }
            res += num;
        } else if (op == '//') {
            int num = st.top() / 1;
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num /= st.top();
                st.pop();
            }
            res += num;
        }
        op = s[i++];
    }
    
    return res;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}
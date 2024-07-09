long long pow(long long base, int exponent) {
    if(exponent == 0)
        return 1;
    else
        return base * pow(base, exponent - 1);
}

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand[operator_.size()]);
    
    long long result = eval(expression);
    
    return (int)result;
}

long long eval(const string& s) {
    int n = s.size();
    stack<int> st;
    int i = 0;
    while (i < n) {
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
    
    long long res = 0;
    char op = '+';
    while (!st.empty()) {
        if (op == '+') {
            res += st.top();
            st.pop();
        } else if (op == '-') {
            res -= st.top();
            st.pop();
        } else if (op == '*') {
            long long num = st.top() * 1;
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
            long long num = st.top() / 1;
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num /= st.top();
                st.pop();
            }
            res += num;
        } else if (op == '//') {
            long long num = st.top() / 1;
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
            long long num = pow(st.top(), 1);
            st.pop();
            while (!st.empty() && st.top() == '(') {
                st.pop();
            }
            if (!st.empty()) {
                num = pow(num, st.top());
                st.pop();
            }
            res += num;
        }
        op = s[i++];
    }
    
    return res;
}
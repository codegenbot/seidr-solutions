long long pow(long long base, int exponent) {
    long long res = 1;
    while (exponent--) {
        res *= base;
    }
    return res;
}

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand[operator_.size() - 1]);
    
    long long result = eval(expression);
    
    return static_cast<int>(result);
}

long long eval(const string& s) {
    int i = 0;
    stack<long long> st;
    while (i < s.size()) {
        if (isdigit(s[i])) {
            long long num = 0;
            while (i < s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            st.push(num);
        } else if (s[i] == '(') {
            i++;
            stack<long long> temp;
            while (i < s.size() && s[i] != ')') {
                if (isdigit(s[i])) {
                    long long num = 0;
                    while (i < s.size() && isdigit(s[i])) {
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
        }
        op = s[i++];
    }
    
    return res;
}